#include<iostream>

int main()
{
    int i = 3;
    int j = 5;
    int* pi = &i;
    int* pj = &j;
    std::cout << pj << std::endl;
    *pj = *pi; // changes the value of the memory address that pj points to.
    std::cout << pj << std::endl;
    pj = pi; // changes the memory address that pj points to.
    std::cout << pj << std::endl;
}
