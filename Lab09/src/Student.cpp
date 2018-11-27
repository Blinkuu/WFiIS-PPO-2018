#include "Student.h"

int Student::m_ID = 0;

Student::Student(const char* name, const char* surname) : m_Name(name),
		m_Surname(surname),
 		m_OwnID(++m_ID) {

}

void Student::Print() const {
	std::cout << "Student " << m_OwnID << ": " << m_Name << ", " << m_Surname << std::endl;
}
