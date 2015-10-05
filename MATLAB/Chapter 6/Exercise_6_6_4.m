clear all; clc;

x = input('Input value: ');

if(0 < x & x < 7)
    y = 4*x;
elseif(7 < x & x < 55)
    y = -10*x;
else
    y = 333;
end

% x = -1 -> y = 333
% x = 5 -> y = 20
% x = 30 -> y = -300
% x = 56 -> y = 333