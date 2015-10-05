#include<iostream>

int function(int x)
{
    return 2*x + x*x - x*x*x*x;
}

double riemann(double left, double right, int R)
{
    double width = (right - left) / R;
    double total = 0;

    for(int i = 1; i < R; i++)
    {
        total += function(left + width*i)*width;
    }

    return total;
}

int main()
{
    double a,b;

    // ask for user input
    std::cout << "a : " << std::endl;
    std::cin >> a;

    // ask for user input
    std::cout << "b : " << std::endl;
    std::cin >> b;

    std::cout << "Number of partitions : " << std::endl;

    int R;
    std::cin >> R;

    double total = riemann(a, b, R);

    std::cout << "The integral equals: "  << total << std::endl;

    return 0;
}
