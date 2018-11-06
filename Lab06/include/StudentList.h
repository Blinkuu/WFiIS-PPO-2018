#pragma once
#include <iostream>
#include <string.h>
#include <string>

void AddStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList,const char* firstname, const char* secondname, const char* surname, int year);
void PrintListContent (int numberOfStudents, char** namesList);
void PrintAllListContent (int numberOfStudents, char** namesList, char** surnamesList, int* yearsList);
void DeleteStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList, int index);
void ClearStudents (int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList);