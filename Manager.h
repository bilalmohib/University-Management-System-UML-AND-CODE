#pragma once
#include"Department.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//Can be called as CAMPUS COORDINATOR
class Manager
{
public:
	Manager()=default;
	~Manager()=default;
	//setters
	void set_Manager_Name(string);
	void set_manager_id(int);
	void set_monthly_budget(float);
	void set_manager_address(string);
	void setManagerEmail(string);
	void setManagerSalary(float);
	//getters
	string get_manager_name(int);
	int get_manager_id(int);
	float get_monthly_budget(int);
	string get_manager_email(int);
	string get_manager_address(int);
private:
	vector<string> name;
	vector<int> id;
	vector<string> manager_adress;
	vector<string> email;
	vector<int> no_of_faculties;
	vector<float> monthlyBudget;
	vector<float> managerSalarys;
};
void Manager::setManagerSalary(float salary)
{
	this->managerSalarys.push_back(salary);
}

void Manager::set_Manager_Name(string name)
{
	this->name.push_back(name);
}
void Manager::set_manager_id(int id)
{
	this->id.push_back(id);
}
void Manager::setManagerEmail(string email)
{
	this->email.push_back(email);
}
void Manager::set_manager_address(string address)
{
	this->manager_adress.push_back(address);
}
void Manager::set_monthly_budget(float mb)
{
	this->monthlyBudget.push_back(mb);
}
int Manager::get_manager_id(int index)
{
	return id[index];
}
string Manager::get_manager_email(int index)
{
	return email[index];
}
string Manager::get_manager_address(int index)
{
	return manager_adress[index];
}
string Manager::get_manager_name(int index)
{
	return name[index];
}
float Manager::get_monthly_budget(int index)
{
	return monthlyBudget[index];
}