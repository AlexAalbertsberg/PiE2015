clear all; clc;

x = [ 1 8 3 9 0 1];
y = [ x(1,1) ]
for(i = 2:length(x))
    y = [y y(1,i-1)+x(1,i)];
end
y == cumsum(x,2)