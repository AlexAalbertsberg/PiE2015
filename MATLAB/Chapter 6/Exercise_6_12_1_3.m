clear all; clc;

x = [ 1 8 3 9 0 1 ];
y = [];
for i=1:length(x)
    y = [y sin(x(1,i))];
end