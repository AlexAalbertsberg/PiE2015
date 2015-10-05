#include<iostream>

double a()
{
    double x = 2.71828;
    x = (int) x;
    return x;
}

// This function won't compile; it is attempting to redefine the previously defined variable x.
// double b()
// {
//     int x = 2;
//     x /= 3;
//     double x;
//     return x;
// }

// This function won't compile; it is attempting to redefine the previously defined variable x.
// double c()
// {
//     int x = 2;
//     double x;
//     x /= 3;
// }

double d()
{
    double x = -2.71828;
    x = (int) x;
    return x;
}

bool e()
{
    bool x = true;
    x = (int) x;
    return x;
}

int f()
{
    int x = 5;
    x = (bool) x;
    return x;
}

int g()
{
    int x = -5;
    x = (bool) x;
    return x;
}

int h()
{
    int j = 3;
    int i = (double)j;
    i = i / 2;
    return i;
}

int main()
{
    std::cout << "The answer to a is: " << a() << std::endl;
    std::cout << "The code in b will not compile." << std::endl;
    std::cout << "The code in c will not compile." << std::endl;
    std::cout << "The answer to d is: " << d() << std::endl;
    std::cout << "The answer to e is: " << e() << std::endl;
    std::cout << "The answer to f is: " << f() << std::endl;
    std::cout << "The answer to g is: " << g() << std::endl;
    std::cout << "The answer to h is: " << h() << std::endl;
}
