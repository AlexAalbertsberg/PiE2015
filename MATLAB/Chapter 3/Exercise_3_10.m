clear all; clc;

A = [1 2 3; 4 5 6; 7 8 9];
B = [4 5 6; 7 8 9; 1 2 3];
v = [1 2 3];

k = 1;
a = 2;
b = 3;
n = 4;
m = 5;

n = rank(A) %n becomes the rank of matrix A
x = det(A) %x becomes the determinant of matrix A
x = size(A) %x becomes a row-vector with 2 elements: the number of rows and columns of A
x = trace(A) %x becomes the trace (sum of diagonal elements) of matrix A
x = norm(v) %x becomes the Euclidean length of vector v
C = A + B %sum of two matrices
C = A - B %subtraction of two matrices
C = A * B %multiplication of two matrices
C = A .* B %’element-by-element’ multiplication (A and B are of equal size)
C = A^k %power of a matrix (k ? Z; can also be used for A?1)
C = A.^k %’element-by-element’ power of a matrix
C = A' %the conjugate transpose of a matrix; A?
C = A.' %the transpose of a matrix; AT
C = A ./ B %’element-by-element’ division (A and B are of equal size)
X = A \ B %finds the solution in the least squares sense to the system of equations AX = B
X = B / A %finds the solution of XA = B, analogous to the previous command
C = inv(A) %C becomes the inverse of A
C = null(A) %C is an orthonormal basis for the null space of A obtained from the singular
            %value decomposition
C = orth(A) %C is an orthonormal basis for the range of A
L = eig(A) %L is a vector containing the (possibly complex) eigenvalues of a square matrix A
[Q,L] = eig(A) %produces a diagonal matrix L of eigenvalues and a full matrix Q whose columns
               %are the corresponding eigenvectors of a square matrix A
S = svd(A) %S is a vector containing the singular values of a rectangular matrix A
[U,S,V] = svd(A) %S is a diagonal matrix with nonnegative diagonal elements in decreasing order;
                 %columns of U and V are the accompanying singular vectors of A
x = linspace(a,b,n) %generates a vector x of n equally spaced points between a and b
x = logspace(a,b,n) %generates a vector x starting at 10a and ended at 10b
                    %containing n values
A = eye(n) %A is an n × n identity matrix
A = zeros(n,m) %A is an n × m matrix with zeros (default m = n)
A = ones(n,m) %A is an n × m matrix with ones (default m = n)
A = diag(v) %results in a diagonal matrix with the elements v1, v2, . . . , vn on the diagonal
v = diag(A) %results in a vector equivalent to the diagonal of A
X = tril(A) %X is lower triangular part of A
X = triu(A) %X is upper triangular part of A
A = rand(n,m) %A is an n × m matrix of elements drawn from a uniform distribution on [0, 1]
A = randn(n,m) %A is an n × m matrix of elements drawn from a standard normal distribution
v = max(A) %v is a vector of the maximum values of the columns in A
v = max(A,[],1)%v is a vector of the maximum values along dimension dim in A (1=column, 2=rows)
v = min(A),
v = min(A,[],2) %ditto - with minimum
v = sum(A),
v = sum(A,1) 