#include <iostream>
#include "Complex.h"

int main() {
    Complex x(3,9);
    Complex y(7,-8);
    Complex z;
    
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    std::cout << x*y << std::endl;

    return 0;
}
