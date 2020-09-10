#pragma once
#include<iostream>
#include"Display.h"
#include"Department.h"
#include"Student.h"
#include"Courses.h"
#include"SubCampuses.h"
#include"Faculties.h"
#include"Employee.h"
#include<vector>
#include<string>
using namespace std;
using namespace std;
int main()
{

	Display display;

	Student student;

	SubCampuses sub_campuses;

	AcademicRecord academicRecord;

	//For Polymorphism and using virtual functions pointers or refrences one is necessary to use otherwise
	//we cannot use virtual functions and polymorphism

	//I am declaring current account pointer

	//Declaring Saving Account

	//Declaring Saving Account


	bool check = true;
	while (check == true)
	{

		/// <summary>
		/// 

		char options;


		cout << "\n\nEnter what you want to do \n\n1) For entering the Faculties data,\n2) For Showing the Faculties data"
			<< "\n3) For Entering the Employees data\n4) For Showing the Employees data \n5) For Entering the students data\n"
			<< "\n6) For Showing the students data\n7) For Entering the Information of University Sub Campuses \n8) For showing the information about university Sub Campuses "
			<< " \n\nAND9) e for exiting the program";


		cin >> options;


		switch (options)
		{
		case '1':
		{
			string name;
			string email;
			string address;
			float decidedSalary;
			string paymentMethod;
			int totalWorkingHours;
			int id;

			//The manager class data
			cout << "\nEnter the Data of Faculties Class: \n";
			cout << "\nEnter the name of Faculty: \t";
			cin >> name;
			cout << "\nEnter the Email of Faculty: \t";
			cin >> email;
			cout << "\nEnter the Id of Faculty: \t";
			cin >> id;
			cout << "\nEnter the Address of Faculty: \t";
			cin >> address;
			cout << "\nEnter the decided Salary of Faculty: \t";
			cin >> decidedSalary;
			cout << "\nEnter the paymemt Method of Faculty: \t";
			cin >> paymentMethod;
			cout << "\nEnter the Id of Faculty: \t";
			cin >> id;
			cout << "\nEnter the Address of Faculty: \t";
			cin >> address;

			cout << "\nEnter the total working hours of Faculty: \t";
			cin >> totalWorkingHours;


			display.setFacultiesInfo(name, id, address, email, decidedSalary, paymentMethod, totalWorkingHours);
			break;
		}
		case '2':
		{
			int index;
			cout << "\nEnter the index at which you want to see faculties info";
			cin >> index;
			cout << "\nThe data of Faculty is : ";
			display.ShowFacultiesDetails(index);
			break;
		}
		case '3':
		{
			string name;
			string email;
			string address;
			float decidedSalary;
			string paymentMethod;
			int totalWorkingHours;
			int id;

			//The manager class data
			cout << "\nEnter the Data of Employees Class: \n";
			cout << "\nEnter the name of Employees: \t";
			cin >> name;
			cout << "\nEnter the Email of Employees: \t";
			cin >> email;
			cout << "\nEnter the Id of Employees: \t";
			cin >> id;
			cout << "\nEnter the Address of Employees: \t";
			cin >> address;
			cout << "\nEnter the decided Salary of Employees: \t";
			cin >> decidedSalary;
			cout << "\nEnter the paymemt Method of Employees: \t";
			cin >> paymentMethod;
			cout << "\nEnter the total working hours of Employees: \t";
			cin >> totalWorkingHours;



			display.setEmployeesInfo(name, id, address, email, decidedSalary, paymentMethod, totalWorkingHours);
			break;
		}
		case '4':
		{
			int index;
			cout << "\nEnter the index at which you want to see Emloyees info";
			cin >> index;
			cout << "\nThe data of Employee is : ";
			display.ShowEmployeesDetails(index);
			break;
		}
		case '5':
		{
			float attandancePercentage;
			float CGPA;
			char grades;
			float marksPercentage;

			string name;
			string address;
			string email;
			int id;

			cout << "\nEnter the Sudents Info\n";

			cout << "\nEnter the students name";
			cin >> name;

			cout << "\nEnter the students ID";
			cin >> id;

			cout << "\nEnter the students address";
			cin >> address;

			cout << "\nEnter the students Email";
			cin >> email;


			cout << "\nEnter the students attandance Percentage";
			cin >> attandancePercentage;

			cout << "\nEnter the students CGPA";
			cin >> CGPA;

			cout << "\nEnter the students grades";
			cin >> grades;

			cout << "\nEnter the students marks percentage";
			cin >> marksPercentage;

			student.setName(name);
			student.setEmail(email);
			student.set_address(address);
			student.set_id(id);







			student.set_Attandance_percentage(attandancePercentage);
			student.set_GCPA(CGPA);
			student.set_student_grades(grades);
			student.set_student_marks(marksPercentage);

			break;
		}
		case '6':
		{
			int index;
			cout << "\n\nEnter the index at which you want students Info";
			cin >> index;

			student.ShowStudentAcademicRecord(index);

			break;
		}
		case '7':
		{
			cout << "\nEnter the info about Sub Campuses of University\n";


			string name;
			string address;
			string email;
			string description;
			float area;
			int id;






			string ccname;
			string ccaddress;
			string ccemail;
			int ccid;
			float ccsalary;
			float ccmonthlyBudget;


			cout << "\nEnter the campus id";
			cin >> id;
			cout << "\nEnter the campus name";
			cin >> name;
			cout << "\nEnter the campus description";
			cin >> description;
			cout << "\nEnter the campus Adress";
			cin >> address;
			cout << "\nEnter the campus Area";
			cin >> area;

			cout << "\nEnter the campus coordinator id";
			cin >> ccid;
			cout << "\nEnter the campus coordinator name";
			cin >> ccname;
			cout << "\nEnter the campus coordinator salary";
			cin >> ccsalary;
			cout << "\nEnter the campus coordinator email";
			cin >> ccemail;
			cout << "\nEnter the campus coordinator address";
			cin >> ccaddress;
			cout << "\nEnter the campus coordinator Monthly Budget";
			cin >> ccmonthlyBudget;


			sub_campuses.set_campus_id(id);
			sub_campuses.set_campus_name(name);
			sub_campuses.set_campus_decription(description);
			sub_campuses.setCampusAddress(address);
			sub_campuses.setCampusCoordinator(ccname, ccsalary, ccid, ccaddress, ccemail, ccmonthlyBudget);
			sub_campuses.setCampusArea(area);

			break;
		}
		case '8':
		{
			int index;
			cout << "\nEnter the address at which you want Sub Campuses Details\n";
			cin >> index;

			cout << "\nThe Sub Campuses id is" << sub_campuses.get_campus_id(index);
			cout << "\nThe Sub Campuses name is" << sub_campuses.get_campus_name(index);
			cout << "\nThe Sub Campuses description is" << sub_campuses.get_campus_decription(index);
			cout << "\nThe Sub Campuses address is" << sub_campuses.getCampusAddress(index);
			cout << "\nThe Sub Campuses area is" << sub_campuses.getCampusArea(index);
			//Show campus details
			sub_campuses.ShowCampusCoordinatorDetails(index);

			break;
		}
		case 'e':
		{
			cout << "The program is ending now: ";
			break;
		}
		default:
		{
			cout << "\n\nEnter right value please: \n";
		}

		}
		/// </summary>
		/// <returns></returns>

		char option;

		cout << "Enter y for opening menu again and n for exiting\t";
		cin >> option;
		while (option != 'y' && option != 'n')
		{
			cout << "Enter right value Please! only y or n: ";
			char option1;
			cin >> option1;
			if (option1 == 'y' || option1 == 'n')
			{
				break;
			}
		}
		if (option == 'y')
		{
			check = true;
		}
		else if (option == 'n')
		{
			check = false;
			cout << "The program is ending now! ";
		}
	}

}
