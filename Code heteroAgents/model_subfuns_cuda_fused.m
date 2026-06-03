function [val,V,Policy,StatDist] = model_subfuns_cuda_fused(p_eqm, a_grid, z_grid, pi_z, Params, vfoptions, simoptions, heteroagentoptions)

coder.gpu.kernelfun;

Params.r = p_eqm(1);
Params.w = p_eqm(2);

n_a = length(a_grid);
n_z = length(z_grid);

r       = p_eqm(1);
w       = p_eqm(2);
lambda  = Params.lambda;
delta   = Params.delta;
alpha   = Params.alpha;
upsilon = Params.upsilon;
crra    = Params.crra;
beta    = Params.beta;

%% VFI: cash and return matrix
cash = zeros(n_a,n_z);
ReturnMatrix = coder.nullcopy(zeros(n_a,n_a,n_z));

coder.gpu.kernel()
for z_c = 1:n_z
    for a_c = 1:n_a
        z = z_grid(z_c);
        a = a_grid(a_c);
        profit = solve_entre(a,z,w,r,lambda,delta,alpha,upsilon);
        cash(a_c,z_c) = max(w,profit) + (1+r)*a;
    end
end

coder.gpu.kernel()
for z_c = 1:n_z
    for a_c = 1:n_a
        cash_is = cash(a_c,z_c);

        for aprime_c = 1:n_a
            cons = cash_is - a_grid(aprime_c);

            if cons > 0
                if crra == 1.5
                    ReturnMatrix(aprime_c,a_c,z_c) = -2.0 / sqrt(cons);
                else
                    ReturnMatrix(aprime_c,a_c,z_c) = cons^(1-crra)/(1-crra);
                end
            else
                ReturnMatrix(aprime_c,a_c,z_c) = -Inf;
            end
        end
    end
end

%% VFI: policy iteration
V0     = zeros(n_a,n_z);
V      = zeros(n_a,n_z);
Policy = zeros(n_a,n_z);

err  = vfoptions.tolerance + 1;
iter = int32(1);
pi_z_transposed = pi_z';

while err > vfoptions.tolerance

    EV = V0 * pi_z_transposed;

    coder.gpu.kernel()
    for z_c = 1:n_z
        for a_c = 1:n_a
            tmpmax = -Inf;
            maxid = 1;

            coder.gpu.nokernel();
            for aprime_c = 1:n_a
                rhs = ReturnMatrix(aprime_c,a_c,z_c) + beta*EV(aprime_c,z_c);
                if rhs > tmpmax
                    tmpmax = rhs;
                    maxid = aprime_c;
                end
            end

            V(a_c,z_c) = tmpmax;
            Policy(a_c,z_c) = maxid;
        end
    end

    for h_c = 1:vfoptions.howards
        EVh = V * pi_z_transposed;

        coder.gpu.kernel()
        for z_c = 1:n_z
            for a_c = 1:n_a
                aprime_opt = int32(Policy(a_c,z_c));
                V(a_c,z_c) = ReturnMatrix(aprime_opt,a_c,z_c) + beta*EVh(aprime_opt,z_c);
            end
        end
    end

    err = max(abs(V(:)-V0(:)));
    V0 = V;
    iter = iter + 1;
end

%% Stationary distribution: scatter with atomicAdd
mu0 = ones(n_a,n_z)/(n_a*n_z);
StatDist = zeros(n_a,n_z);
massSameZ = zeros(n_a,n_z);

dist_err = simoptions.tolerance + 1;
dist_iter = int32(1);

while dist_err > simoptions.tolerance && dist_iter <= simoptions.maxit

    massSameZ(:,:) = 0;

    coder.gpu.kernel()
    for z_c = 1:n_z
        for a_c = 1:n_a
            aprime_opt = int32(Policy(a_c,z_c));
            massSameZ(aprime_opt,z_c) = gpucoder.atomicAdd(massSameZ(aprime_opt,z_c), mu0(a_c,z_c));
        end
    end

    StatDist = massSameZ * pi_z;

    dist_err = max(abs(StatDist(:)-mu0(:)));
    mu0 = StatDist;
    dist_iter = dist_iter + 1;
end

check_sum = sum(StatDist(:));
StatDist = StatDist / check_sum;

%% Aggregates
A_vec = zeros(n_a,n_z);
E_vec = zeros(n_a,n_z);
K_vec = zeros(n_a,n_z);
L_vec = zeros(n_a,n_z);

coder.gpu.kernel()
for z_c = 1:n_z
    for a_c = 1:n_a
        z = z_grid(z_c);
        a = a_grid(a_c);

        [profit, kstar, lstar] = solve_entre(a, z, w, r, lambda, delta, alpha, upsilon);

        weight = StatDist(a_c,z_c);
        A_vec(a_c,z_c) = a * weight;

        if w <= profit
            E_vec(a_c,z_c) = weight;
            K_vec(a_c,z_c) = kstar * weight;
            L_vec(a_c,z_c) = lstar * weight;
        end
    end
end

agg_A = sum(A_vec(:));
agg_K = sum(K_vec(:));
agg_L = sum(L_vec(:));
agg_E = sum(E_vec(:));

GE_K = agg_K - agg_A;
GE_L = agg_L - (1 - agg_E);

val = GE_K*GE_K + GE_L*GE_L;

if heteroagentoptions.verbose == 1
    fprintf('Current GE prices: \n');
    fprintf('    GE prices: r = %8.6f \n', p_eqm(1));
    fprintf('    GE prices: w = %8.6f \n', p_eqm(2));
    fprintf('Current GeneralEqmEqns: \n');
    fprintf('    GE capital: %8.6f \n', GE_K);
    fprintf('    GE labor:   %8.6f \n', GE_L);
    fprintf('-----------------------------------------\n');
end

end

