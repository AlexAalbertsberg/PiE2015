clear all; clc;

t = input('Input value: ');

if(t >= 24)
    z = 3 * t + 1;
elseif(t < 9)
    z = t^(2/3) - 2 * t;
else
    z = -t;
end

% t = 50 -> z = 151
% t = 19 -> z = -19
% t = -6 -> z = -6^(2/3) + 12
% t = 0 -> z = 0