#pragma once

class MyString {
public:

	// Basic constructor
	MyString(const char* string = "");

	// Copy constructor
	MyString(const MyString& other);
	~MyString();

	// Method that prints MyString class
	void Print() const;

	char* GetString() const { return m_String; }
public:

	//operator== overlad, returns true if strings are equal
	bool operator==(const MyString& other) const;
	
	//operator+ overlad, adds two MyStrings together
	MyString operator+(const MyString& other) const;

	MyString& operator+=(const MyString& other);

	//operator* overlad, returns MyString multiplied by times
	MyString operator*(int times) const;

	//operator[] overlad, returns reference to char at given index
	char& operator[](int index) const;
	
	MyString& operator=(const MyString& other);
private:
	char* m_String;
	int m_Size;
};

//global operator* overlad, returns MyString multiplied by times
MyString operator*(int times, const MyString& other);
