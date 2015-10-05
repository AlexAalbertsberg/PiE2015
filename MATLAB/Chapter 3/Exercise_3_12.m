clear all; clc;

A = rand(5) % Random 5x5 matrix.
b = [1; 2; 3; 4; 5] % Random 5x1 vector.

x = A \ b % Results in the solution for x in Ax = b.

answer = A*x-b % Results in a vector that is close to a zero vector.