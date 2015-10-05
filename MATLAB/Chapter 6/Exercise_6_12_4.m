clear all; clc;

x = rand(5,5)

for i = 1:size(x,1)
    for j = 1:size(x,2)
        if(x(i,j) < 0.5)
            x(i,j) = 0;
        elseif(x(i,j) >= 0.5)
            x(i,j) = 1;
        end
    end
end