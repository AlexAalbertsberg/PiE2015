clear all; clc;

sum = 0;
n=1;
while(sum + sqrt(n^3) < 1000)
    sum = sum + sqrt(n^3);
    n = n + 1;
end