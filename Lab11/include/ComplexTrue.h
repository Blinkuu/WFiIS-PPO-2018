#pragma once

#include "Rational.h"

class Complex {
private:
	double _re;
	double _im;
public:

	// Constructor of class Complex
	Complex(double re = 0, double im = 0) : _re(re), _im(im) {}
	
	// A method that prints instance variables
	void Print() const;

	// A method that returns a copy of _im variable
	double Im() const { return _im; }

	// A static method that calculates the modulo of a given complex number
	static double Modulo(const Complex& complex);

	// Operator overloads
	Complex operator+(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator*(const Rational& other) const;

	// Type-cast operator which returns only real part of complex number when object
	// of type Complex is casted to double.
	explicit operator double() const { return _re; }
};