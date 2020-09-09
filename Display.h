#pragma once
#include"Department.h"
#include"Student.h"
#include"Courses.h"
#include"SubCampuses.h"
#include"Faculties.h"
#include"Employee.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Display
{
public:
	Display()=default;
	~Display();
	void setStudentsData(string, int, string)
	{

	}


	void setStudentsData(string name, int id, string address, string email, int departmentID, int departmentStrength, string HODname);

	void setStudentsAcademicRecord(float marks, char grades, float attandancePercentage, float CGPA);

	void setStudentCourseInfo(Courses courses, string coursesEnrolled, float courseWiseAttandancePercentage, float courseWiseMarks);

	//Setting the faculties of students
	void setFacultiesInfo(string name,int id,string address,string email, float decidedSalary, string payment_method, float total_working_hours);

	//setting the employees info
	//void setEmployeesInfo(string name, int id, string address, string email, float decidedSalary, string payment_method, float total_working_hours);

	void ShowStudentCoursesInfo();

	void ShowStudentRecord(int);

	void ShowFacultiesDetails(int);
    
	//void ShowEmployeesDetails(int);
	void setEmployeesInfo(string name, int id, string address, string email, float decidedSalary, string payment_method, float total_working_hours);


	void ShowEmployeesDetails(int id);

private:
	//Using Inheritance

	Student *student;

	Courses courses;

	Faculties faculties;

    //Using Polymorphism
	Department* department=new Faculties();

	


	
};

void Display::setStudentsAcademicRecord(float marks, char grades, float attandancePercentage, float CGPA)
{
	student->set_student_marks(marks);
	student->set_student_grades(grades);
	student->set_Attandance_percentage(attandancePercentage);
	student->set_GCPA(CGPA);
}
void Display::setStudentsData(string name, int id, string address, string email,int departmentID,int departmentStrength,string HODname)
{
	student->setName(name);
	student->set_id(id);
	student->set_address(address);
	student->setEmail(email);

} 
void Display::ShowStudentRecord(int id)
{
	cout<<"\nThe name of student is equal to "<<student->getName(id);
	cout << "\nThe Id of student is equal to " << student->get_id(id);
	cout << "\nThe Email of student is equal to " << student->getEmail(id);
	cout << "\nThe Adress of student is equal to " << student->get_address(id);

	//Now showing the student academic records
	student->ShowStudentAcademicRecord(id);

}
void Display::setStudentCourseInfo(Courses courses, string coursesEnrolled, float courseWiseAttandancePercentage, float courseWiseMarks)
{
	courses.set_courses_enrolled(coursesEnrolled);
	courses.set_coursewise_attendance_percentage(courseWiseAttandancePercentage);
	courses.set_course_wise_marks(courseWiseMarks);
}
void Display::ShowStudentCoursesInfo()
{
	//Passing the courses object to the courses info
	student->ShowStudentCoursesInfo(courses);
}
void Display::setFacultiesInfo(string name, int id, string address, string email, float decidedSalary, string payment_method, float total_working_hours)
{
	department->setName(name);
	department->set_id(id);
	department->set_address(address);
	department->setEmail(email);
	department->set_payments(decidedSalary, payment_method, total_working_hours);
}
void Display::ShowFacultiesDetails(int id)
{
	cout<<"\nThe id of department faculty is "<<department->get_id(id);
	cout << "\nThe Name of department faculty is " << department->getName(id);
	cout << "\nThe Email of department faculty is " << department->getEmail(id);
	cout << "\nThe Address of department faculty is " << department->get_address(id);
	cout << "\nThe Department faculty strength is " << department->getDepartmentStrength();
}
void Display::setEmployeesInfo(string name, int id, string address, string email, float decidedSalary, string payment_method, float total_working_hours)
{
	department = new Employee();
	department->setName(name);
	department->set_id(id);
	department->set_address(address);
	department->setEmail(email);
	department->set_payments(decidedSalary, payment_method, total_working_hours);
}
void Display::ShowEmployeesDetails(int id)
{
	cout << "\nThe id of Employee is " << department->get_id(id);
	cout << "\nThe Name of Employee is " << department->getName(id);
	cout << "\nThe Email of Employee is " << department->getEmail(id);
	cout << "\nThe Address of Employee is " << department->get_address(id);
	cout << "\nThe Department Employee strength is " << department->getDepartmentStrength();
}
Display::~Display()
{
	delete department;
	delete student;
}
