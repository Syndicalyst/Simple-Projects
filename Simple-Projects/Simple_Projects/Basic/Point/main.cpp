#include <iostream>
#include "Point.h"

int main() {
    Point x(2,7);
    Point y(3,8);
    Point z;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    std::cout << x << " is ";
    if ( x != y ) {
        std::cout << "not ";
    }
    std::cout << "equal to " << y << std::endl;

    std::cout << "Distance: " << x.distance(y) << std::endl;
    return 0;
}
