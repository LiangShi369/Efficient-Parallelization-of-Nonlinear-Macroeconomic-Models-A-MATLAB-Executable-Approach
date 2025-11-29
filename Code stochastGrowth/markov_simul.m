function [y_sim] = markov_simul(Ptran,Tsim,y1,dbg)
% ========================================================================
%  Code for simulating a Markov chain by Alessandro Di Nola
%
%  INPUT:
%  Ptran  - Transition matrix, dim: (N,N)
%  Tsim   - Length of the time series to simulate
%  y1     - Initial condition, see below
%  dbg    - Debug flag
%
%  OUTPUT:
%  y_sim - Simulated time series s.t. y_sim(1)=y1, dim: (Tsim,1)
%
%  NOTES:
%  This function calls simul_iid.m
%  Note that y1 can be either
%  - A scalar: in this case y_sim(1) = y1
%   
%  REFERENCES:
%  https://de.mathworks.com/matlabcentral/answers/57961-simulating-a-markov-chain#answer_371503
% ========================================================================%

ns = size(Ptran,1); % Number of states in the Markov chain

% Check if inputs are correct
if dbg
    validateattributes(Ptran, {'double'}, {'finite', 'nonnan', 'nonempty', 'real', '>=', 0, '<=', 1, ...
        'size', [ns, ns]})
    % Make sure probabilities sum to one
    prSumV = sum(Ptran,2);
    if max(abs( prSumV - 1 )) > 1e-5
        error('Probabilities do not sum to one. Exiting.');
    end
    if Tsim < 2
        error('The time horizon has to have dimension Tsim>1. Exiting.')
    end
    if y1<1 || y1>ns
        error('Initial condition is out of bounds. Exiting.')
    end
end

% Initialize output array
y_sim    = zeros(Tsim,1);
y_sim(1) = y1;

% Simulation
for t = 1:Tsim-1
    y_sim(t+1) = simul_iid(Ptran(y_sim(t),:),dbg);
end

end %end function "markov_simul"

