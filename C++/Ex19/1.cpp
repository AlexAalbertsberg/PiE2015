#include<vector>
#include<iostream>

int main()
{
    std::vector<int> a;
    int size;

    std::cout << "Input vector size: ";
    std::cin >> size;

    a.resize(size);

    for(int i = 0; i < size; i++)
    {
        std::cout << "Input a number: ";
        std::cin >> a[i];
    }

    int total = 0;
    for(int i = 0; i < a.size(); i++)
    {
        total += a[i];
    }

    std::cout << "Average = " << (double)total/a.size();
}
