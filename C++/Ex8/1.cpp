#include<iostream>

bool a()
{
    bool x = (2 * 2 < 8 / 4);
    return x;
}

int b()
{
    int x = 2;
    int y = 3;
    int z = 4;
    x = y = z;
    return x;
}

bool c()
{
    bool x = 1.0 + 2.0 / 4.0 == 5.0 / 2.0 - 1.0 && 2.0 * 2.0 / 1.0;
    return x;
}

int main()
{
    std::cout << "The output of a is: " << a() << std::endl;
    std::cout << "The output of b is: " << b() << std::endl;
    std::cout << "The output of c is: " << c() << std::endl;
}
