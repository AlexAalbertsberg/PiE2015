#include<iostream>

int main()
{
    int a = 1; // a = 1
    int b = 2; // b = 2
    double c = a + b; // c = 3
    a = b; // a = 2
    b = 4; // b = 4
    c = a + b; // c = 6
    c += a; // c = 8
    b++; // b = 5
    c = 5/2; // c = 2.5
    a = 5/2; // a = 2
    c = b/a; // c = 2.5
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
}
