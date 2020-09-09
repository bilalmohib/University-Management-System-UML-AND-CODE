#pragma once
#include"Student.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class AcademicRecord
{
public:
	AcademicRecord()=default;
	~AcademicRecord()=default;
	//setters
	void set_student_marks(float);
	void set_student_grades(char);
	void set_Attandance_percentage(float);
	void set_GCPA(float);
	//getters
	float get_student_marks(int);
	char get_student_grades(int);
	float get_Attandance_percentage(int);
	float get_GCPA(int);

private:
	vector<float> marks;
	vector<char> grades;
    vector<float> attandance_percentage;
	vector<float> CGPA;
};


void AcademicRecord::set_student_marks(float marks)
{
	this->marks.push_back(marks);
}


void AcademicRecord::set_Attandance_percentage(float attandacePercentage)
{
	this->attandance_percentage.push_back(attandacePercentage);
}
void AcademicRecord::set_GCPA(float CGPA)
{
	this->CGPA.push_back(CGPA);
}
void AcademicRecord::set_student_grades(char grades)
{
	this->grades.push_back(grades);
}
float AcademicRecord::get_Attandance_percentage(int index)
{
	return this->attandance_percentage[index];
}
float AcademicRecord::get_GCPA(int index)
{
	return this->CGPA[index];
}
char AcademicRecord::get_student_grades(int index)
{
	return this->grades[index];
}
float AcademicRecord::get_student_marks(int index)
{
	return this->marks[index];
}