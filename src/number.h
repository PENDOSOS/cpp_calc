#pragma once

#include <iostream>

#define EPSILON 0.0001

class Number
{
public:
    Number(double i) : value(i) {};
    friend const Number operator+(const Number& left, const Number& right);
    friend const Number operator-(const Number& left, const Number& right);
    friend const Number operator*(const Number& left, const Number& right);
    friend const Number operator*=(const Number& left, const Number& right);
    friend const Number operator/(const Number& left, const Number& right);
    friend const std::ostream& operator<<(std::ostream& os, const Number& value);

    double value;
};
