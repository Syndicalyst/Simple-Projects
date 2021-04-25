#include <stdio.h>
#include "Vector.h"

int main() {
    Vector first = Vector(7,8);
    Vector second = Vector(9,3);
    Vector def;

    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << def << std::endl;

    std::cout << second.len() << std::endl;

    std::cout << first + second << std::endl;
    return 0;
}