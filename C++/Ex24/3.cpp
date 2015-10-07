#include<iostream>

// Remember to include this header if you want to change the format of output.
#include<iomanip>

int main()
{
    // Defining a relatively long, non-integer 'double', n
    double n = 1.23456789;

    // Outputting n to screen - note the default precision to which the number
    // is declared!
    std::cout << n << std::endl; // Standard precision = 6

    int prec = 7;
    std::cout << std::setprecision(prec) << n << std::endl; // Print with precision = 7.

    prec = 9; // Precision = 9.
    std::cout << std::setprecision(prec);
    std::cout << n << std::endl; // Print twice with precision = 9.
    std::cout << n << std::endl;

    double nn = 10.987654321; // new double nn.
    std::cout << nn << std::endl; // print with precision 9.
    int width = 12;
    prec = 3;
    std::cout << std::setprecision(prec)
              << std::setw(width) << n << std::endl; // precision = 3, width = 12.
    width = 20;

    std::cout << std::setw(width); // width = 20.
    std::cout << n << std::endl;
    std::cout << n << std::endl; // width has reset

    char c = '*';
    std::cout << std::setw(10); // width = 10.
    std::cout << std::setfill(c); // * as padding character.
    std::cout << n << std::endl; // print n with leading * to pad to width.

    c = '|';
    std::cout << std::setw(10); // width = 10.
    std::cout << std::setfill(c); // | as padding character.
    std::cout << n << std::endl; // print n with leading | to pad to width.

    c = 'A';
    std::cout << std::setw(10); // width = 10.
    std::cout << std::setfill(c); // A as padding character.
    std::cout << n << std::endl; // print n with leading A to pad to width.

    return 0;
}
