clear all; clc;

uptoten = 0;
sum = 0;
while(sum < 10)
    sum = sum + rand(1)
    uptoten = uptoten + 1;
end

num = 0;
range = 0;
while(num < 0.8 | num > 0.85)
    num = rand(1);
    range = range + 1;
end

x = [];
meannums = 0;
while(mean(x) < 0.01 | mean(x) > 0.5 | isnan(mean(x)))
    x = [x rand(1)];
    meannums = meannums + 1;
end