clear all; clc;

N = input('Reynolds Number: ');

if(N <= 0)
    C = 0;
elseif(N > 0 & N <= 0.1)
    C = 24/N;
elseif(N > 0.1 & N <= 1e3)
    C = 24/N*(1+0.14*N^0.7);
elseif(N > 1e3 & N <= 5e5)
    C = 0.43;
else
    C = 0.19 - 8e4/N;
end

% N = -3e3 -> C =0
% N = 0.01 -> C = 2400
% N = 56 -> C = 1.4329
% N = 1e3 -> C = 0.4470
% N = 3e6 -> C = 0.1633