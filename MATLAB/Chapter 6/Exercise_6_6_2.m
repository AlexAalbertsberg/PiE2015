clear all; clc;

s = input('Input value: ');

if(s <= 1)
    t = 2 * s;
elseif(s < 10)
    t = 9 - s;
elseif(s < 100)
    t = sqrt(s);
else
    t = s;
end

% s = 1 -> t = 2 
% s = 7 -> t = 2
% s = 57 -> t = sqrt(57)
% s = 300 -> t = 300