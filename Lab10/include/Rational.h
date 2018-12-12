#pragma once

#include <iostream>

class Rational {
private:
	int _l;
	int _m;
public:
	Rational() = default;
	Rational(int l);
	Rational(int l, int m);

	// Prints private variables of this class
	void Print() const;

	// Getters
	int GetL() const { return _l; }
	int GetM() const { return _m; }

	// Type-cast operator
	operator float() const {
		return static_cast<float>(_l)/static_cast<float>(_m);
	}
};