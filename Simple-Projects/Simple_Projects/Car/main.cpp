#include <iostream>

#include "Car.h"

int main() {
    Car car;
    
    std::cout << "=======================" << std::endl;

    std::cout << car << std::endl;

    std::cout << "=======================" << std::endl;

    try {
        car.refill(60);
    } catch (ToMuchFuel) {
        std::cout << "Car tank overfilled!" << std::endl;
    }

    std::cout << car << std::endl;

    std::cout << "=======================" << std::endl;

    try {
        car.drive(Point(5, 11));
    } catch (OutOfFuel) {
        std::cout << "Out of Fuel!" << std::endl;
    }

    std::cout << car << std::endl;

    //delete &car;

    return 0;
}