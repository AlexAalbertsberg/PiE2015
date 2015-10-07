#include<iostream>

int add(int a, int b);

int add2(int &a, int &b);

int main()
{
    int a = 1;
    int b = 2;

    std::cout << a << " " << b << std::endl;
    std::cout << add(a,b) << std::endl;
    std::cout << a << " " << b << std::endl;

    std::cout << a << " " << b << std::endl;
    std::cout << add2(a,b) << std::endl;
    std::cout << a << " " << b << std::endl;

    return 0;
}

// Does not update the value of a, as it is not assigned when it is called.
int add(int a, int b)
{
    a = a + b;
    return a;
}

// add2 is not assigned either, however the variables are "passed by reference":
// any changes that occur in the variable during the function are also reflected
// in the variables used to call the function.
int add2(int &a, int &b)
{
    a = a + b;
    return a;
}
