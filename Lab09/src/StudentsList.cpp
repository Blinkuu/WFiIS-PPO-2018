#include "StudentsList.h"

StudentsList::StudentsList(const char* subject) : m_StudentArray(nullptr), m_Size(0), m_Subject(subject) { }

StudentsList::StudentsList(const StudentsList& other) {
	m_Size = other.m_Size;
	m_Subject = other.m_Subject;

	m_StudentArray = new const Student*[m_Size];

	for(int i = 0; i < m_Size; i++) {
		m_StudentArray[i] = other.m_StudentArray[i];
	}
}

StudentsList::~StudentsList() {
	for(int i = 0; i < m_Size; i++) {
		delete m_StudentArray[i];
	}
	delete [] m_StudentArray;
}
void StudentsList::AddStudent(const Student* newStudent) {
	if(!m_Size) {
		m_StudentArray = new const Student*[1];
		m_StudentArray[0] = newStudent;
		++m_Size;
	} else {
		const Student** temp = new const Student*[m_Size + 1];

		for(int i = 0; i < m_Size; i++) {
			temp[i] = m_StudentArray[i];
		}

		temp[m_Size] = newStudent;

		delete[] m_StudentArray;
		m_StudentArray = temp;

		++m_Size;
	}
}

void StudentsList::PrintInfo() const {
	std::cout << "Students list: " << m_Subject << std::endl;
}

void StudentsList::PrintAll() const {
	if(!m_Size) {
		std::cout << "\nEmpty list." << std::endl;
	} else {
		std::cout << "\n" << m_Subject << std::endl;
		for(int i = 0; i < m_Size; i++) {
			m_StudentArray[i]->Print();
		}	
	}
}

void StudentsList::Clear() {
	m_Size = 0;
	for(int i = 0; i < m_Size; i++) {
		m_StudentArray[i] = nullptr;
	}
}
