#pragma once
#include"Accounts.h"
#include"Department.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Faculties:public Department
{
public:
	Faculties()=default;
	~Faculties()=default;
	//////////////////////////////////Using Polymorphism///////////////////////////////////
		//Setters
	void setName(string) override;
	void set_id(int) override;
	void set_address(string) override;
	void setEmail(string) override;
	void set_payments(float, string, float);
	//Getters
	string getName(int) override;
	int get_id(int) override;
	string getEmail(int) override;
	string get_address(int) override;
	//for showing payments
	void showPaymentDetails(int) override;
private:
	vector<int> faculty_id;
	vector<string> faculty_name;
	vector<string> faculty_email;
	vector<string> faculty_address;
	vector<string> faculty_type;
	vector<string> faculty_description;
    Accounts accounts;
};



void Faculties::set_id(int id)
{
	this->faculty_id.push_back(id);
}
void Faculties::setEmail(string email)
{
	this->faculty_email.push_back(email);
}
void Faculties::setName(string name)
{
	this->faculty_name.push_back(name);
}
void Faculties::set_address(string saddress)
{
	this->faculty_address.push_back(saddress);
}
string Faculties::getName(int index)
{
	return this->faculty_name[index];
}
int Faculties::get_id(int index)
{
	return this->faculty_id[index];
}
string Faculties::getEmail(int index)
{
	return this->faculty_email[index];
}
string Faculties::get_address(int index)
{
	return this->faculty_address[index];
}
void Faculties::set_payments(float decidedSalary, string payment_method, float total_working_hours)
{
	//Using composition
	accounts.set_decided_salary(decidedSalary);
	accounts.set_payment_method(payment_method);
	accounts.set_total_working_hours(total_working_hours);
}
void Faculties::showPaymentDetails(int index)
{
	cout << "\nThe decided salaray of faculty with name " << faculty_name[index] << " is " <<
		accounts.get_decided_salary(index);
	cout << "\nThe payment method of faculty with name " << faculty_name[index] << " is " <<
		accounts.get_payment_method(index);
	cout << "\nThe deducted salary of faculty with name " << faculty_name[index] << " is " <<
		accounts.get_deducted_salary(index);
	cout << "\nThe paid salary of faculty with name " << faculty_name[index] << " is " <<
		accounts.get_paid_salary(index);
	cout << "\nThe bonus salary paid of faculty with name " << faculty_name[index] << " is " <<
		accounts.get_bonus_salary(index);
}