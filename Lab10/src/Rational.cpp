#include "Rational.h"

Rational::Rational(int l, int m) : _l(l), _m(m) {}

Rational::Rational(int l) : _l(l), _m(1) {}

void Rational::Print() const {
	std::cout << _l << "/" << _m << std::endl;
}