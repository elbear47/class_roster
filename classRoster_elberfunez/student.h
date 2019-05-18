#pragma once
#include <iostream>
#include "degree.h"
using namespace std;
class Student {
public:
	int studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	double* numOfDaysToCompleteCourse; // this will be an array of size 3 for 3 courses
	DegreeType degreeType;

public:
	const static int numOfDaysToCompleteCourseArraySize = 3;
	Student();
	Student(int studentID, string firstName, string lastName, int age, double numOfDaysToCompleteCourse[], DegreeType degreeType);

//setters
	void setStudentID(int studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setNumOfDaysToCompleteCourse(double numOfDaysToCompleteCourse[]);
	virtual void setDegreeType(DegreeType d) = 0;// initialize to zero
	

	//getters
	int getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	double* getNumOfDaysToCompleteCourse();
	virtual DegreeType getDegreeType()=0;
	virtual void print() = 0;

	//the destructor
};

