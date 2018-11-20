#include "GradeBook.h"

int GradeBook::_size = 0;

GradeBook::~GradeBook() {
	for (int i = 0; i < _size; i++) {
		delete _gradesTab[i];
	}
	delete[] _gradesTab;
}

void GradeBook::insert(const Grade* grade) {
	std::cout << grade->GetID() << std::endl;
	if (grade->GetID() == 1) {
		_gradesTab = new const Grade*[1];
		_gradesTab[0] = grade;
		++_size;
	}
	else {
		const Grade** temp = new const Grade*[grade->GetID()];
		for (int i = 0; i < _size; i++) {
			temp[i] = _gradesTab[i];
		}
		temp[_size] = grade;

		delete[] _gradesTab;
		_gradesTab = new const Grade*[grade->GetID()];

		for (int i = 0; i <= _size; i++) {
			_gradesTab[i] = temp[i];
		}

		delete[] temp;

		++_size;
	}
}

void GradeBook::addGrade(float grade) {
	Grade* temp = new Grade(grade);
	insert(temp);
}

void GradeBook::print() const {
	std::cout << "Grades in the book:" << std::endl;
	for (int i = 0; i < _size; i++) {
		_gradesTab[i]->print();
	}
}