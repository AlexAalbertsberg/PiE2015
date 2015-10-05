clear all; clc;

hold on
x = -3: 0.05: 3; y = sin(3*x)
subplot(1,2,1); plot(x,y); axis tight
z = (y < 0.5) .* y
subplot(1,2,2); plot(x,y,'r:'); plot(x,z,'r'); axis tight
hold off