#include "Date.h"
#include <iostream>
#include <iomanip>

void Date::validate(int day, int month, int year) {
    if (day < 1 || day > 31) {
        throw InvalidDate("Month doesn`t contain such days amount!");
    }
    if (month < 1 || month > 12) {
        throw InvalidDate("Year doesn`t contain such months amount!");
    }
    if (year < 0) {
        throw InvalidDate("Invalid year!");
    }
    if ( month == 2 || month == 4 || month == 6 || month == 9 || month == 11 ) {
        if ( day == 31 ) {
            InvalidDate("This month doesn`t contain such amount days!");
        }
    }
    if ( day == 30 && month == 2 ) {
        throw InvalidDate("February doesn`t have so much days!");
    }
    if ( year % 4 != 0 ) {
        if ( day == 29 && month == 2 ) {
            throw InvalidDate("February doesn`t contain 29 days this year!");
        }
    }
}

Date::Date(int day, int month, int year): day(1), month(1), year(1970) {
    this->day = day;
    this->month = month;
    this->year = year;

    validate(day, month, year);
}
Date::~Date() {}

int Date::getDay() const {
    return this->day;
}
int Date::getMonth() const {
    return this->month;
}
int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << "(" << std::setfill('0') << std::setw(2) << date.getDay() << ":" << std::setw(2) << 
    date.getMonth() << ":" << std::setw(4) << date.getYear() << ")" << std::endl;
}