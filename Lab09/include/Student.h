#pragma once

#include <iostream>

class Student {
private:
	const char* m_Name;
	const char* m_Surname;
	static int m_ID;
	int m_OwnID;
public:
	// Trywialny konstruktor domyślny
	Student() = default;
	
	// Konstruktor sparametryzowany
	Student(const char* name, const char* surname);

	// Metoda wypisująca informacje o studencie
	void Print() const;
};
