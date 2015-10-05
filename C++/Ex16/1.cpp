#include<iostream>

int main()
{
    int i;
    int* p_i = &i;
    int** p_p_i = (&p_i);
    i = 0;                                      // i = 0
    std::cout << "i = " << i << std::endl;
    *p_i = 1;                                   // i = 1
    std::cout << "i = " << i << std::endl;
    **p_p_i = 2;                                // i = 2
    std::cout << "i = " << i << std::endl;

    int j = 7;                                  // j = 7
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    p_i = &j;                                   // p_i = memory address of j
    *p_i = 77;                                  // j = 77
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    *p_p_i = &i;                                // p_p_i = memory address of i
    *p_i = 22;                                  // i = 22
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    **p_p_i = 222;                              // i = 222
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    *p_i = (*p_i) / 111;                        // i = 2
    std::cout << "dividing *p_i by 111: " << std::endl;
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    return 0;
}
