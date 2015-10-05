#include<iostream>

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    int a = 2;
    int b = 3;
    double c = 2.7;
    double d = 3.9;

    std::cout << add(a,b) << std::endl;
    std::cout << add(c,d) << std::endl;
}
