#pragma once
#include <string>
#include "student.h"
#include "degree.h"
class NetworkStudent : public Student // inheriting from Student--> type of student = Network
{
public:
	NetworkStudent();
	NetworkStudent(int studentID, string firstName, string lastName, int age, double numOfDaysToCompleteCourse[], DegreeType degreeType);

};
DegreeType getDegreeType();
void setDegreeType(DegreeType d);
void print();

//Destructor
~NetworkStudent();