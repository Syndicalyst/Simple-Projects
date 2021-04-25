#include <ostream>
#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, std::string model): 
        fuelCapacity(capacity),
        fuelAmount(capacity),
        fuelConsumption(consumption),
        location(location),
        model(std::move(model)) {
}

Car::~Car() = default;

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuelNeed = location.distance(destination) * fuelConsumption;
    double newFuelAmount = fuelAmount - fuelNeed;

    if ( newFuelAmount < 0 ) {
        throw OutOfFuel();
    }
    fuelAmount = newFuelAmount;
    location = destination;
}

void Car::drive(double x, double y) {
    drive(Point(x, y));
}

void Car::refill(double fuel) {
    const double newFuelAmount = fuelAmount + fuel;

    if ( newFuelAmount > fuelCapacity ) {
        throw TooMuchFuel();
    }

    fuelAmount += newFuelAmount;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car: " << car.getModel() << '\n';
    out << "Car Location: " << car.getLocation() << '\n';
    out << "Fuel Amount: " << car.getFuelAmount() << '\n';
    out << "Consumption: " << car.getFuelConsumption() << '\n';
    return out;
}
