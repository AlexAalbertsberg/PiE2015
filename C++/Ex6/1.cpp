#include<iostream>

bool a()
{
    bool test = (1 == 1);
    return test;
}

bool b()
{
    int a = 1;
    int b = 1;
    bool test = (a == b);
    return test;
}

bool c()
{
    double a = 1.1;
    int b = 1.1;
    bool test = (a == b);
    return test;
}

bool d()
{
    double a = 1.0;
    int b = 1.0;
    bool test = (a == b);
    return test;
}

bool e()
{
    double a = 1.0;
    int b = 1.1;
    bool test = (a == b);
    return test;
}

bool f()
{
    int a = 1;
    int b = 2;
    bool test = (a == b);
    return test;
}

bool g()
{
    int a = 1;
    int b = 2;
    bool test = (a != b);
    return test;
}

bool h()
{
    int a = 1;
    int b = 2;
    bool test = (a >= b);
    return test;
}

bool i()
{
    int a = 1;
    int b = 2;
    bool test = (a <= b);
    return test;
}

int main()
{
    std::cout << "a: " << a() << std::endl;
    std::cout << "b: " << b() << std::endl;
    std::cout << "c: " << c() << std::endl;
    std::cout << "d: " << d() << std::endl;
    std::cout << "e: " << e() << std::endl;
    std::cout << "f: " << f() << std::endl;
    std::cout << "g: " << g() << std::endl;
    std::cout << "h: " << h() << std::endl;
    std::cout << "i: " << i() << std::endl;
}
