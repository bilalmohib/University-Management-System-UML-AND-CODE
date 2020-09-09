#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Courses
{
public:
	Courses()=default;
	~Courses()=default;
	//setters
	void set_courses_enrolled(string);
	void set_coursewise_attendance_percentage(float);
	void set_course_wise_marks(float);
	void change_course_enrolled(int,string);
	//getters
	string get_courses_enrolled(int);
	float get_coursewise_attendance_percentage(int);
	float get_course_wise_marks(int);
	int get_total_no_courses();
private:
	vector<string> courses_enrolled;
	vector<float> course_wise_attandance_percentage;
	vector<float> course_wise_marks;
	int total_no_courses;

};




void Courses::set_courses_enrolled(string ce)
{
	this->courses_enrolled.push_back(ce);
	this->total_no_courses = courses_enrolled.size();
}
void Courses::set_coursewise_attendance_percentage(float cap) 
{
	for (size_t i = 0; i < courses_enrolled.size(); i++)
	{
		cout << "The " << (i + 1) << " course is " << courses_enrolled[i] << endl;
	}
	this->course_wise_attandance_percentage.push_back(cap);
}
void Courses::set_course_wise_marks(float cm)
{
	for (size_t i = 0; i < courses_enrolled.size(); i++)
	{
		cout << "The " << (i + 1) << " course is " << courses_enrolled[i] << endl;
	}
	this->course_wise_marks.push_back(cm);
}
void Courses::change_course_enrolled(int index,string course)
{
	for (size_t i = 0; i < courses_enrolled.size(); i++)
	{
		cout << "The " << (i + 1) << " course is " << courses_enrolled[i] << endl;
	}
	this->courses_enrolled.at(index) = course;
}
string Courses::get_courses_enrolled(int index)
{
	return courses_enrolled[index];
}
float Courses::get_coursewise_attendance_percentage(int index)
{
	return course_wise_attandance_percentage[index];
}
float Courses::get_course_wise_marks(int index)
{
	return course_wise_marks[index];
}
int Courses::get_total_no_courses()
{
	return total_no_courses;
}