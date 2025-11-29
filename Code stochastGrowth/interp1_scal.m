% Fast linear interpolation routine
% Usage:
% yi = interp1_scal(x,y,xi)
% where x and y are column vectors with n elements, xi is a scalar and yi
% is a scalar
% Input Arguments
% x - Sample points
%   column vector
% Y - Sample data
%   column vector
% xi - Query point
%   scalar
function yi = interp1_scal(x,y,xi)
coder.gpu.kernelfun;

n = size(x,1) ;
% j = sum(x <= xi);

j = 0;
for i = 1:n
    if x(i) <= xi
            j = j + 1;
    else
    break
    end
end

j = max(min(j,n-1),1) ;
yi = y(j) + (xi-x(j))*(y(j+1)-y(j))/(x(j+1)-x(j)) ;

% slope = (y(j+1)-y(j))/(x(j+1)-x(j)) ;
% yi = y(j)+(xi-x(j))*slope ;

end %end function

