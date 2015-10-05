#include<iostream>

double multiplyThree(double a, double b, double c)
{
    return a * b * c;
}

int main()
{
    double a,b,c;
    std::cout << "Input three numbers: " << std::endl;
    std::cin >> a >> b >> c;

    std::cout << a << " * " << b << " * " << c << " = " << multiplyThree(a,b,c)
    << std::endl;
    return 0;
}
