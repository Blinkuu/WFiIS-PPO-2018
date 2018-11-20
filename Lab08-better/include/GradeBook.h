#pragma once

#include "Grade.h"

class GradeBook {
private:
	const Grade** _gradesTab;
	static int _size;
public:
	GradeBook() = default;
	~GradeBook();

	void insert(const Grade* grade);
	void addGrade(float grade);
	void print() const;
};