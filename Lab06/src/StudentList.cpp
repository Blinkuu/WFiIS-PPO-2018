#include "StudentList.h"

void AddStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList,const char* firstname, const char* secondname, const char* surname, int year) {
	static int size = 256;
	static char** list = new char*[3];
	static char** surList = new char*[3];
	static int* yList = new int[3];;
	if (*numberOfStudents == 0) {
		for (int i = 0; i < 3; i++) {
			list[i] = new char[size];
			surList[i] = new char[size];
		}
		*namesList = list;
		*surnamesList = surList;
		*yearsList = yList;
	}

  std::string temp(firstname);
  temp.append(" ");
  temp.append(secondname);

  strcpy(list[*numberOfStudents], temp.c_str());

	const char* str = surname;
	strcpy(surList[*numberOfStudents], str);

	yList[*numberOfStudents] = year;

	(*numberOfStudents)++;
}

void PrintListContent (int numberOfStudents, char** list) { 
	for (int i = 0; i < 3; i++)
		printf("%s\n", list[i]);
}

void PrintAllListContent(int numberOfStudents, char** namesList, char** surnamesList, int* yearsList) {
	for (int i = 0; i < numberOfStudents; i++) {
		std::cout << surnamesList[i] << ", " << namesList[i] << " - year " << yearsList[i] << std::endl;
	}
}

void DeleteStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList,const int index) {
	delete[](*namesList)[index];
	delete[](*surnamesList)[index];
  
	for (int i = index; i < *numberOfStudents - 1; i++) {
		(*namesList)[i] = (*namesList)[i + 1];
		(*surnamesList)[i] = (*surnamesList)[i + 1];
		(*yearsList)[i] = (*yearsList)[i + 1];
	}

	(*numberOfStudents)--;
}

void ClearStudents(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList) {
    for(int i = 0; i < *numberOfStudents; i++) {
  		delete[] (*namesList)[i];
      delete[] (*surnamesList)[i];
    }
  delete[] *namesList;
  delete[] *surnamesList;
  delete[] *yearsList;
}