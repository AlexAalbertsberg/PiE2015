clear all; clc;

A = [2 4 1; 6 7 2; 3 5 9];

x = A(1,:)
y = A([2,3], :)

temp = A.' % transpose
colsum = sum(A(:,:)) % column sum
rowsum = sum(temp(:,:)) % row sum