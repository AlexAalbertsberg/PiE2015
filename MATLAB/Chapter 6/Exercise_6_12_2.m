clear all; clc;

x = [ 4 1 6 -1 -2 2];
y = [ 6 2 -7 1 5 -1];

a = [];

for i = 1:length(x)
    for j = 1: length(y)
        a(i,j) = x(1,i)/y(1,j);
    end
end

b = [];
for i = 1:length(x)
    b(1,i) = x(1,i)*y(1,i);
end

c = [];
for i = 1:length(x)
    for j = 1:length(y)
        c(i,j) = x(1,i)/(2+x(1,i)+y(1,j));
    end
end

d = [];
for i = 1:length(x)
    for j = 1:length(y)
        d(i,j) = 1/max(x(1,i),y(1,j));
    end
end