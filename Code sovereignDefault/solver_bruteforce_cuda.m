function [q,bp,vp,def,totaltime,avgtime] = solver_bruteforce_cuda(b,z,m,pdf,para)

coder.gpu.kernelfun;

theta = para.theta ; 
betta = para.betta ;
sigg = para.sigg ;
rstar = para.rstar ;
phi0 = para.phi0 ;

ns = length(z) ;
nb = size(b,1);
[~,nb0] = min(abs(b));

%Initialize the Value functions
vp = zeros(ns,nb) ;  %continue repaying
vd = zeros(ns,1) ; 
def = zeros(ns,nb) ; 
vo = vd;
vp1 = vp;  

bp = zeros(ns,nb) ; %debt policy function (expressed in indices)  
q = ones(ns,nb)/(1+rstar); %q is price of debt; it is a function of  (y_t, d_{t+1}) 
ua = ( (exp(z).*m *(1-phi0)).^(1-sigg) - 1) / (1-sigg)  ;

%%
diff = 1;
tol = 1e-7;
its = 1;

timer = tic;  % <----- Start the timer

while diff > tol && its < 1000

evp = m.^(1-sigg).*betta.*pdf*vp;

vd1 = ua + m.^(1-sigg).*betta.*pdf*(theta*vo + (1-theta)*vd);

w = b' .* q + exp(z).*m ;
  
coder.gpu.kernel()
for is = 1:ns
    for ib = 1:nb
        tmpmax = -Inf;
        maxidx = 1;

        for i = 1:nb
            c = w(is,i) - b(ib);

            if c > 0
                u = 1 - 1/c + evp(is,i);
            else
                u = -Inf;
            end

            if u > tmpmax
                tmpmax = u;
                maxidx = i;
            end
        end

        vp1(is,ib) = tmpmax;
        bp(is,ib) = maxidx;
    end
end

% def = vp1 < repmat(vd1,1,nb); 
coder.gpu.kernel()
for is = 1:ns
    for ib = 1:nb
        if vp1(is,ib) < vd1(is)
            def(is,ib) = 1;
        else
            def(is,ib) = 0;
        end
    end
end

qnew = (1- pdf*def)/(1+rstar);

diff = max(abs(qnew(:) - q(:))) + max(abs(vp1(:) - vp(:)))...
    + max(abs(vd1(:) - vd(:)));

vo = vp1(:,nb0);
vp = vp1;
vd = vd1;
q = qnew;

if mod(its, 50) == 0 
  fprintf('%5.0f ~ %8.10f \n', its, diff);
end

its = its + 1;

end

totaltime = toc(timer);
avgtime   = totaltime/(its-1);

fprintf('# its%4.0f ~Time %8.8fs ~Avgtime %8.8fs \n', its-1, totaltime, avgtime);


end

