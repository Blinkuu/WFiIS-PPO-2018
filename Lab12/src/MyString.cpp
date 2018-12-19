#include "MyString.h"

#include <iostream>

MyString::MyString(const char* string) {
	int i = 0;
	while(string[i]) {
		++i;
	}
	m_Size = i;

	m_String = new char[m_Size + 1];

	for(int i = 0; i < m_Size; i++) {
		m_String[i] = string[i];
	}
	m_String[m_Size] = 0;
}

MyString::MyString(const MyString& other) {
	m_String = new char[other.m_Size + 1];

	for(int i = 0; i < other.m_Size; i++)
		m_String[i] = other.m_String[i];
	m_String[other.m_Size] = 0;
}

MyString::~MyString() {
	delete[] m_String;
	m_Size = 0;
}

void MyString::Print() const {
	std::cout << m_String << std::endl;
}

bool MyString::operator==(const MyString& other) const {
	if(this->m_Size != other.m_Size) {
		return false;
	}

	for(int i = 0; i < m_Size; i++) {
		if(this->m_String[i] != other.m_String[i]) {
			return false;
		}
	}

	return true;
}

MyString MyString::operator+(const MyString& other) const {
	auto tmp = new char[this->m_Size + other.m_Size + 1];

	int i = 0;
	for(; i < this->m_Size; i++) {
		tmp[i] = this->m_String[i];
	}

	for(int j = 0; j < other.m_Size; j++) {
		tmp[i + j] = other.m_String[j];
	}

	tmp[this->m_Size + other.m_Size] = 0;

	MyString result(tmp);

	delete[] tmp;

	return result;
}

MyString& MyString::operator+=(const MyString& other) {
	*this = *this + other;
	return *this;
}

MyString MyString::operator*(int times) const {
	MyString tmp = *this;
	for(int i = 0; i < times; i++) {
		tmp = tmp + m_String;
	}
	return tmp;
}

MyString operator*(int times, const MyString& other) {
	MyString tmp = other;
	for(int i = 0; i < times; i++) {
		tmp = tmp + other.GetString();;
	}
	return tmp;
}

char& MyString::operator[](int index) const {
	return m_String[index];
}

MyString& MyString::operator=(const MyString& other) {
	if(this == &other) {
		return *this;
	}

	delete[] m_String;
	m_Size = 0;

	m_String = new char[other.m_Size + 1];
	m_Size = other.m_Size;

	for(int i = 0; i < other.m_Size; i++)
		m_String[i] = other.m_String[i];
	m_String[other.m_Size] = 0;

	return *this;
}