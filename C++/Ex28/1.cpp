#include<string>
#include<iostream>

template<typename T> T add(T a, T b)
{
    return (T)a+b;
}

int main()
{
    int x = add(1,2);

    std::string fName = "Alex ";
    std::string sName = "Aalbertsberg";

    std::string y = add(fName,sName);
    double z = add(2.5, 3.3);

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}
