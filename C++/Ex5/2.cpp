#include<iostream>

int rem(int x, int y)
{
    return x % y;
}

int main()
{
    int x, y;
    std::cin >> x;
    std::cin >> y;

    std::cout << x << "%" << y << " = " << rem(x,y) << std::endl;

    return 0;
}
