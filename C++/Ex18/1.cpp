#include<vector>
#include<iostream>

int main()
{
    std::vector<int> a(20);
    std::vector<int> b(20);

    for(int i = 1; i <= a.size(); i++)
    {
        a[i-1] = i*i;
        b[i-1] = i*i*i;
    }

    for(int i = 1; i <= a.size(); i++)
    {
        std::cout << i << " " << a[i-1] << " " << b[i-1] << std::endl;
    }
}
