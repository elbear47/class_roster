#include <iostream>
#include<iomanip>
#include "student.h"
using namespace std;

Student::Student() {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->numOfDaysToCompleteCourse = new double[numOfDaysToCompleteCourseArraySize];
	for (int i = 0; i < numOfDaysToCompleteCourseArraySize; i++)
		this->numOfDaysToCompleteCourse[i] = 0;
	//this->degreeType = degreeType;
}
Student::Student(int studentID, string firstName, string lastName, int age, double numOfDaysToCompleteCourse[], DegreeType degreeType){
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->numOfDaysToCompleteCourse = new double[numOfDaysToCompleteCourseArraySize];
	for (int i = 0; i < 3; i++)
		this->numOfDaysToCompleteCourse[i] = numOfDaysToCompleteCourse[i];
};
//getters
int Student::getStudentID() {
	return studentID;
}
string Student::getFirstName() {
	return firstName;
}
string Student::getLastName() {
	return lastName;
}
string Student::getEmail() {
	return email;
}
int Student::getAge() {
	return age;
}
double* Student::getNumOfDaysToCompleteCourse() {
	return numOfDaysToCompleteCourse;
}
//setters
void Student::setStudentID(int studentID) {
	studentID = studentID;
}
void Student::setFirstName(string firstName) {
	firstName = firstName;
}
void Student::setLastName(string lastName) {
	lastName = lastName;
}
void Student::setAge(int age) {
	age = age;
}
void Student::setEmail(string email) {
	email = email;
}
void Student::setNumOfDaysToCompleteCourse(double numOfDaysToCompleteCourse[]) {
	if (this->numOfDaysToCompleteCourse != nullptr) {
		delete[]this->numOfDaysToCompleteCourse;
		this->numOfDaysToCompleteCourse = nullptr;
	}
	else
	{
		this->numOfDaysToCompleteCourse = new double[numOfDaysToCompleteCourseArraySize];
		for (int i = 0; i < 3, i++)
			this->numOfDaysToCompleteCourse[i] = numOfDaysToCompleteCourse[i];
	}
}
//print method displays all except degree type
void Student::print() {
	cout << left << setw(5) << studentID;
	cout << left << setw(20) << firstName;
	cout << left << setw(20) << lastName;
	cout << left << setw(3) << age;
	cout << left << setw(25) << email;
	cout << left << setw(3) << numOfDaysToCompleteCourse[0];
	cout << left << setw(3) << numOfDaysToCompleteCourse[1];
	cout << left << setw(3) << numOfDaysToCompleteCourse[2];

}
Student::Student() {
	if (numOfDaysToCompleteCourse != nullptr)
	{
		delete[] numOfDaysToCompleteCourse;
		numOfDaysToCompleteCourse = nullptr;
	}
}