#pragma once
#include"Manager.h"
#include<iostream>
#include<vector>
using namespace std;
class SubCampuses:public Manager
{
public:
	SubCampuses()=default;
	~SubCampuses()=default;
	void set_campus_id(int);
	void set_campus_name(string);
	void set_campus_decription(string);
	void setCampusAddress(string);
	void setCampusCoordinator(string name,float salary,int id,string address,string email,float monthlyBudget);
	void setCampusArea(float);
	int get_campus_id(int);
	string get_campus_name(int);
	string get_campus_decription(int);
	string getCampusAddress(int);
	float getCampusArea(int);
	//Show campus details
	void ShowCampusCoordinatorDetails(int);
private:
	vector<int> campus_id;
	vector<string> campus_name;
	vector<string> campus_description;
	vector<string> campus_address;
	vector<float> campus_area;
	Manager manager;
};

void SubCampuses::set_campus_id(int id)
{
	campus_id.push_back(id);
}
void SubCampuses::set_campus_name(string name)
{
	campus_name.push_back(name);
}
void SubCampuses::setCampusCoordinator(string name, float salary,
	int id, string address, string email,float monthlyBudget)
{
	manager.set_Manager_Name(name);
	manager.set_manager_id(id);
	manager.set_monthly_budget(monthlyBudget);
	manager.set_manager_address(address);
	manager.setManagerEmail(email);
	manager.setManagerSalary(salary);
}
void SubCampuses::set_campus_decription(string campusDescription)
{
	this->campus_description.push_back(campusDescription);
}
void SubCampuses::setCampusAddress(string adress)
{
	this->campus_address.push_back(adress);
}
void SubCampuses::setCampusArea(float a)
{
	this->campus_area.push_back(a);
}
void SubCampuses::ShowCampusCoordinatorDetails(int index)
{
	cout << "\nThe manager id of Sub Campus " << campus_name[index]<<" is equal to "<<get_manager_id(index);
	cout << "\nThe manager name of Sub Campus " << campus_name[index] << " is equal to "<<get_manager_name(index);
	cout << "\nThe manager budget of Sub Campus " <<campus_name[index] << " is equal to "<<get_monthly_budget(index);
	cout << "\nThe manager email of Sub Campus " << campus_name[index] << " is equal to "<<get_manager_email(index);
	cout << "\nThe manager address of Sub Campus " << campus_name[index] << " is equal to "<<get_manager_address(index);
}
int SubCampuses::get_campus_id(int index)
{
	return this->campus_id[index];
}
string SubCampuses::get_campus_name(int index)
{
	return this->campus_name[index];
}
string SubCampuses::get_campus_decription(int index)
{
	return this->campus_description[index];
}
string SubCampuses::getCampusAddress(int index)
{
	return this->campus_address[index];
}
float SubCampuses::getCampusArea(int index)
{
	return this->campus_area[index];
}