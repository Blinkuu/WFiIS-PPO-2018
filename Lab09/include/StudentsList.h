#pragma once

#include <iostream>

#include "Student.h"

class StudentsList {
private:
	const Student** m_StudentArray; 
	int m_Size;
	const char* m_Subject;
public:
	// Trywialny konstruktor domyślny
	StudentsList() = default;

	// Konstruktor sparametryzowany, przypisuje nazwę przedmiotu oraz wartości domyślne
	StudentsList(const char* subject);

	// Konstruktor kopiujący; wykonuje deep copy
	StudentsList(const StudentsList& other);

	// Destruktor, zwalnia pamięć (całość)
	~StudentsList();

	// Metoda dodająca studenta do ta
	void AddStudent(const Student* newStudent);

	// Metoda wypisująca nazwę przedmiotu
	void PrintInfo() const;

	// Metoda wypisująca nazwę przedmiotu oraz wszystkich studentów
	void PrintAll() const;
	
	// Metoda czyści aktualną tablicę (ustawia wskaźniki na nullptr, aby można było je później zwolnić bez błędów)
	void Clear();
};
