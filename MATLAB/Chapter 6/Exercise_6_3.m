clear all; clc;

x = [3 16 9 12 -1 0 -12 9 6 1];

% Provide commands that:

% Set all positive values of x to 0.
% x(x>0) = 0;

% Set values that are multiples of 3 to 3 (use rem).
% x(rem(x,3)==0) = 3;

% Multiply the even values of x by 5.
% x(rem(x,2)==0) = x(rem(x,2)==0)*5

% Extract the values of x that are greater than 10 into a vector called y.
% y = x(x>10)

% Set the values in x that are less than the mean to 0.
% x(x < mean(x)) = 0;

% Set the values in x that are above the mean to their difference to the
% mean.
% x(x > mean(x)) = x(x > mean(x)) - mean(x)