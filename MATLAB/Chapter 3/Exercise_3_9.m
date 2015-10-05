clear all; clc;

x = [1 3 7];
y = [2 4 2];

A = [3 1 6; 5 2 7];
B = [1 4; 7 8; 2 2];

x+y; % Executes fine.
%x+A; % Does not execute. x dim is 1x3, whereas A dim is 2x3.
%x'+y % Does not execute. x' dim is 3x1, whereas y dim is 1x3.
%A-[x' y'] % Does not execute. A dim is 2x3, whereas x' y' dim is 3x2.
[x; y] + A; % Executes fine.
%[x; y'] % Does not execute. x dim is 1x3, whereas y' dim 3x1.
[x;y]; % Executes fine.
A-3 % Executes fine.
% A + B % Does not execute. A dim is 2x3, whereas B dim is 2x3.
B' + A % Executes fine.
B*A % Executes fine.
% A.*B % Does not execute. Dimensions do not match for element-wise 
     % multiplication.
A'.*B; % Executes fine.
2*B; % Executes fine.
2.*B % Executes fine.
%B./x' %Does not execute. B dim is 3x2, whereas x' dim is 3x1.
B./[x' x']; % Executes fine.
%2/A % Does not execute due to matrix dimension constraints.
%ones(1,3) * A % Does not execute. ones dim is 1x3 whereas A dim is 2x3.
ones(1,3) * B % Executes fine.