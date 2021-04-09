#include <iostream>
#include "Point.h"

int main() {
    Point x = Point(2,7);
    Point y = Point(3,8);
    Point z = Point();

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    if ( x == y ) {
    std::cout << x << " is equal to " << y << std::endl;
    } else {
    std::cout << x << " is not equal to " << y << std::endl;
    }

    std::cout << "Distance: " << x.distance(y) << std::endl;
    return 0;
}