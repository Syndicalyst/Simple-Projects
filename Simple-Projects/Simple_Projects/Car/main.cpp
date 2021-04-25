#include <iostream>
#include "Car.h"

static void print(const Car& car) {
    std::cout << "=======================\n" << car;
    std::cout << "=======================\n";
}

int main() {
    Car car;
    print(car);

    try {
        car.refill(60);
    } catch (TooMuchFuel) {
        std::cout << "Car tank overfilled!" << std::endl;
    }

    print(car);

    try {
        car.drive(Point(5, 11));
    } catch (OutOfFuel) {
        std::cout << "Out of Fuel!" << std::endl;
    }

    print(car);
    return 0;
}
