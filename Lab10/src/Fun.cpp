#include "Fun.h"

#include <vector>

int Fun::_counter = 0;

Rational Fun::Add(const Rational& rat1, const Rational& rat2) {
	if(rat1.GetM() == rat2.GetM()) {
		int add = rat1.GetL() + rat2.GetL();
		return Rational(add,rat1.GetM());
	} else {
		int l1 = rat1.GetL() * rat2.GetM();
		int l2 = rat2.GetL() * rat1.GetM();
		int m = rat1.GetM() * rat2.GetM();
		return Rational(l1+l2,m);
	}
}

Rational Fun::Multiply(const Rational& rat1, const Rational& rat2) {
	int a = rat1.GetL() * rat2.GetL();
	int b = rat1.GetM() * rat2.GetM();
	return Rational(a, b);
}

Rational Fun::Divide(const Rational& rat1, const Rational& rat2) {
	int a = rat1.GetL() * rat2.GetM();
	int b = rat1.GetM() * rat2.GetL();
	return Rational(a, b);
}

std::vector<Rational> _averageVec;

float Fun::Average() {
	Rational rat1 = _averageVec[0];
	Rational rat2 = _averageVec[1];

	float a = static_cast<float>(rat1);
	float b = static_cast<float>(rat2);

	return (a+b)/2;
}

void Fun::Average(const Rational& rat) {
	_averageVec.push_back(rat);
}