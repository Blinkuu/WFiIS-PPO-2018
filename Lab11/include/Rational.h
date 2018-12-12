#pragma once

#include <iostream>

#include "Complex.h"

class Rational {
private:
	double _l;
	double _m;
public:
	// Constructor of class Rational
	Rational(double l = 0, double m = 0) : _l(l), _m(m) {}

	// A method that prints instance variables
	void Print() const { std::cout << _l << "/" << _m << std::endl; }

	// Type-cast operator which returns decimal fraction when object
	// of type Rational is casted to double
	explicit operator double() const { return _l/_m; }
};