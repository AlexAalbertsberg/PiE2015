clear all; clc;

max_iter = 50;
tolerance = 1e-4;
iter = 0;
xold = 0.1;
x = 1;
while (abs (x - xold) > tolerance) | (iter < max_iter)
    xold = x;
    x = cos(xold);
    iter = iter + 1;
end

% or makes iter always go up to the value of max_iter