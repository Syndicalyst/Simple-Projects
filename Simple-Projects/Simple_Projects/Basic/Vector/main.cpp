#include <cstdio>
#include <iostream>
#include "Vector.h"

int main() {
    Vector first(7,8);
    Vector second(9,3);
    Vector def;

    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << def << std::endl;

    std::cout << second.len() << std::endl;

    std::cout << first + second << std::endl;
    return 0;
}
