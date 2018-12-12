#pragma once

#include "Rational.h"

class Fun {
private:
	static int _counter;
public:
	Fun() = default;
	~Fun() = default;

	// Static function that adds two rational numbers
	static Rational Add(const Rational& rat1, const Rational& rat2);
	
	// Static function that multiplies two rational numbers
	static Rational Multiply(const Rational& rat1, const Rational& rat2);
	
	// Static function that divides two rational numbers
	static Rational Divide(const Rational& rat1, const Rational& rat2);
	
	// Static function that returns an average of rational numbers, 
	// which were previously added to vector of Rational objects.
	static float Average();
	
	// Static function that adds Rational objects to vector, which then will be used
	// to calculate the average
	static void Average(const Rational& rat);
};