#pragma once

#include <iostream>

class Grade {
private:
	float _grade;
	static int _id;
public:
	Grade() = default;
	Grade(float grade);

	void print() const;

	int GetID() const { return _id; }
};