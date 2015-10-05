clear all; clc;

A = rand(6)

% 1.

B = A
B(logical(eye(size(B)))) = 1

% 2.

T = triu(tril(A,1),-1)
