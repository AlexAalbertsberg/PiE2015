#include<iostream>

int main()
{
    double sum = 0;

    int i = 1;
    while(true)
    {
        sum += (double) 1/i;
        i *= 2;
        std::cout << sum << std::endl;
    }
}
