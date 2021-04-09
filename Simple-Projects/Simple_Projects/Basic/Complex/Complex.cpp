#include "Complex.h"

Complex::Complex(double real, double imaginary): real(0), imaginary(0) {
    this->real = real;
    this->imaginary = imaginary;
}
Complex::~Complex() {}

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return real != other.real || imaginary != other.imaginary;
}

void Complex::operator+=(const Complex& other) {
    real += other.real;
    imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    real -= other.real;
    imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    Complex temp(real, imaginary);

    temp += other;
    return temp;
}

Complex Complex::operator-(const Complex& other) const {
    Complex temp(real, imaginary);

    temp -= other;
    return temp;
}

Complex Complex::operator*(const Complex& other) const {
    Complex temp(real, imaginary);

    temp.real = real * other.real - imaginary * other.imaginary;
    temp.imaginary = real * other.imaginary + imaginary * other.real;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << '(' << complex.getReal() << ',' << complex.getImaginary() << 'i' << ')';
    return out;
}