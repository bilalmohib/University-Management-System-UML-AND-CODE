#pragma once
#include"Courses.h"
#include"AcademicRecord.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student:public AcademicRecord
{
public:
	Student()=default;
	~Student()=default;
	//Using polymorphism between methods
	void setName(string);
	void set_id(int);
	void set_address(string);
	void setEmail(string);
	void ShowStudentAcademicRecord(int);
	void ShowStudentCoursesInfo(Courses);
	//Overriding the getters from department class
	string getName(int);
	int get_id(int);
	string getEmail(int);
	string get_address(int);
	void set_payments(float, string, float)
	{

	}
protected:
	/// <summary>
	/// Implementing the composition between the Student 
	/// </summary>
	vector<string> student_name;
	vector<int> student_id;
	vector<string> student_email;
	vector<string> student_address;
	int index;
};

void Student::set_id(int id)
{
	student_id.push_back(id);
}
void Student::setEmail(string email)
{
	student_email.push_back(email);
}
void Student::setName(string name)
{
	student_name.push_back(name);
}
void Student::set_address(string saddress)
{
	student_address.push_back(saddress);
}
string Student::getName(int index)
{
	return student_name[index];
}
int Student::get_id(int index) 
{
	return student_id[index];
}
string Student::getEmail(int index)
{
	return student_email[index];
}
string Student::get_address(int index)
{
	return student_address[index];
}
void Student::ShowStudentAcademicRecord(int index)
{
	cout << "\nThe Attandance percentage of student  " << student_name[index] << " is "
		<<get_Attandance_percentage(index);
	cout << "\nThe CGPA of student " << student_name[index] << " is " <<
		get_GCPA(index);
	cout << "\nThe Grade of student " << student_name[index] << " is " <<
		get_student_grades(index);
	cout << "\nThe Grade of student " << student_name[index] << " is " <<
		get_student_marks(index);
}
void Student::ShowStudentCoursesInfo(Courses studentCourses)
{
	int size = studentCourses.get_total_no_courses();
	for (int i = 0; i <size; i++)
	{
		cout << "\nThe course enrolled of student \n" << this->student_name[i] << " is "
			<< studentCourses.get_courses_enrolled(i);
	}



	for (int i = 0; i < size; i++)
	{
		cout << "\nThe course_wise attandance percentage of student \n" << this->student_name[i] << " is "
			<< studentCourses.get_coursewise_attendance_percentage(i);
	}
	
	
	for (int i = 0; i < size; i++)
	{
		cout << "\nThe course_wise attandance percentage of student \n";
		cout<<this->student_name[i] << " is "
			<< studentCourses.get_course_wise_marks(index);
	}
		
	cout << "\nThe total number of courses are " << studentCourses.get_total_no_courses();
}
