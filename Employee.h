#pragma once
#include"Accounts.h"
#include"Department.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employee:public Department
{
public:
	Employee()=default;
	~Employee()=default;
	//////////////////////////////////Using Polymorphism///////////////////////////////////
	//Setters
	void setName(string) override;
	void set_id(int) override;
	void set_address(string) override;
	void setEmail(string) override;
	void set_payments(float,string,float) override;
	//Getters
	string getName(int) override;
	int get_id(int) override;
	string getEmail(int) override;
	string get_address(int) override;
	//for showing payments
	void showPaymentDetails(int) override;
private:
	vector<string> employee_name;
	vector<int> employee_id;
	vector<string> employee_email;
	vector<string> employee_adress;
	vector<string> employee_job;
	Accounts accounts;
};


void Employee::set_id(int id)
{
	this->employee_id.push_back(id);
}
void Employee::setEmail(string email)
{
	this->employee_email.push_back(email);
}
void Employee::setName(string name)
{
	this->employee_name.push_back(name);
}
void Employee::set_address(string saddress)
{
	this->employee_adress.push_back(saddress);
}
string Employee::getName(int index)
{
	return this->employee_name[index];
}
int Employee::get_id(int index)
{
	return this->employee_id[index];
}
string Employee::getEmail(int index)
{
	return this->employee_email[index];
}
string Employee::get_address(int index)
{
	return this->employee_adress[index];
}
void Employee::set_payments(float decidedSalary, string payment_method, float total_working_hours)
{
	//Using composition
	accounts.set_decided_salary(decidedSalary);
	accounts.set_payment_method(payment_method);
	accounts.set_total_working_hours(total_working_hours);

}
void Employee::showPaymentDetails(int index)
{
	cout << "\nThe decided salaray of faculty with name " << employee_name[index] << " is " <<
		accounts.get_decided_salary(index);
	cout << "\nThe payment method of faculty with name " << employee_name[index] << " is " <<
		accounts.get_payment_method(index);
	cout << "\nThe deducted salary of faculty with name " << employee_name[index] << " is " <<
		accounts.get_deducted_salary(index);
	cout << "\nThe paid salary of faculty with name " << employee_name[index] << " is " <<
		accounts.get_paid_salary(index);
	cout << "\nThe bonus salary paid of faculty with name " << employee_name[index] << " is " <<
		accounts.get_bonus_salary(index);
}