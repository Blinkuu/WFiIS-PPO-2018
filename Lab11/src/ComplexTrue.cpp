#include "ComplexTrue.h"

#include <iostream>
#include <cmath>

void Complex::Print() const {
	if (_im > 0)
		std::cout << _re << "+i" << _im << std::endl; 
	else if (_im < 0)
		std::cout << _re << "-i" << (-1)*_im << std::endl; 
	else
		std::cout << _re << std::endl; 
}

double Complex::Modulo(const Complex& complex) {
	return sqrt(complex._re * complex._re + complex._im * complex._im);
}

Complex Complex::operator+(const Complex& other) const {
	double real = this->_re + other._re;
	double imaginary = this->_im + other._im;
	return Complex(real, imaginary);
}

Complex Complex::operator*(const Complex& other) const {
	double real = this->_re * other._re - this->_im * other._im;
	double imaginary = this->_re * other._im * this->_im * other._re;
	return Complex(real, imaginary);
}
Complex Complex::operator*(const Rational& other) const {
	Rational tmp = other;
	double real = this->_re * static_cast<double>(tmp);
	double imaginary = this->_im * static_cast<double>(tmp);
	return Complex(real, imaginary);
}