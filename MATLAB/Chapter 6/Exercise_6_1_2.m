clear all; clc;

b = [2 31 -40 0];
c = 0;

gt = b > c % vector containing values 1, 1, 0 and 0.
equals = (b == c) % vector containing values 0, 0, 0 and 1.
nequals = (b ~= c) % vector containing values 1, 1, 1 and 0.
compl = ~b % vector containing values 0, 0, 0 and 1.
and = (b & c) % vector containing values 0, 0, 0 and 0.
or = (b | c) % vector containing values 1, 1, 1 and 0.