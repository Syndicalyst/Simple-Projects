#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model): 
        fuelCapacity(60), fuelConsumption(0.6), location(Point(0,0)), model("Mercedes") {
    this->fuelCapacity = capacity;
    this->fuelAmount = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}

Car::~Car() {}

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
    double newFuelAmount = fuelAmount + fuel;
    fuelAmount = newFuelAmount;

    if ( newFuelAmount > fuelCapacity ) {
        throw ToMuchFuel();
    }
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car: " << car.getModel() << std::endl;
    out << "Car Location: " << car.getLocation() << std::endl;
    out << "Fuel Amount: " << car.getFuelAmount() << std::endl;
    out << "Consumption: " << car.getFuelConsumption() << std::endl;
    return out;
}