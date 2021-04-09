#include "Vector.h"

Vector::Vector(double x, double y) : x(0), y(0) {
    this->x = x;
    this->y = y;
}

Vector::~Vector() {}

double Vector::getX() const {
    return this->x;
}

double Vector::getY() const {
    return this->y;
}

void Vector::setX(double value) {
    this->x = value;
}

void Vector::setY(double value) {
    this->y = value;
}

double Vector::len() const {
    return hypot(this->x, this->y);
}

bool Vector::operator==(const Vector& other) const {
    return x == other.x && y == other.y;
}

bool Vector::operator!=(const Vector& other) const {
    return x != other.x || y != other.y;
}

void Vector::operator+=(const Vector& other) {
    x += other.x;
    y += other.y;
}

void Vector::operator-=(const Vector& other) {
    x -= other.x;
    y -= other.y;
}

Vector Vector::operator+(const Vector& other) const {
    Vector temp(x, y);

    temp += other;
    return temp;
}

Vector Vector::operator-(const Vector& other) const {
    Vector temp(x, y);

    temp -= other;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
    out << '(' << vector.getX() << '.' << vector.getY() << ')';
    return out;
}