clear all; clc;

numTriangles = 4;
lengthS = sqrt(2);

approx = numTriangles*lengthS;

numDouble = 0;

while(numDouble < 20)
    numTriangles = numTriangles * 2;
    a = approx / 2;
    b = sqrt(a^2-1);
    c = 1-b;
    
    lengthS = sqrt(a^2+c^2);
    approx = numTriangles * lengthS;
    
    numDouble = numDouble + 1;
end