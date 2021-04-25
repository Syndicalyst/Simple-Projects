#include <cmath>
#include <ostream>
#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {
}

Point::~Point() = default;

double Point::getX() const {
    return this->x;
}

double Point::getY() const {
    return this->y;
}

void Point::setX(double value) {
    this->x = value;
}

void Point::setY(double value) {
    this->y = value;
}

double Point::distance(const Point &other) const {
    return hypot(x - other.x, y - other.y);
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    return out << '(' << point.getX() << '.' << point.getY() << ')';
}
