clear all; clc;

a = randn(1,7)
b = randn(1,7)

gt = a > b
equals = a == b
nequals = a ~= b
compl = ~a
and = (a & b)
or = (a | b)
exclor = xor(a,b)
any(a)
all(a)