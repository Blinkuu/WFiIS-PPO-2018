#include "Grade.h"

int Grade::_id = 0;

Grade::Grade(float grade) {
	_grade = grade;
	++_id;
}

void Grade::print() const {
	std::cout << "Grade ID=" << _id << " value=" << _grade << std::endl;
}