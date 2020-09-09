#pragma once
#include<iostream>
#include<vector>
using namespace std;
#include<string>
class Department
{
public:
    Department()=default;
	virtual ~Department()=default;
	//Declaring the methods
	
//Setters
	
	void setDepartmentID(int);
	void setDepartmentStrength(int);
	void setHODName(string);
	//Inheriting
	virtual void setName(string);
	virtual void set_id(int)=0;
	virtual void set_address(string)=0;
	virtual void setEmail(string)=0;
	//Defining getters 
	virtual string getName(int)=0;
	virtual int get_id(int)=0;
	virtual string get_address(int)=0;
	virtual string getEmail(int)=0;


	//for calculating payments
	virtual void set_payments(float, string, float)=0;

	virtual void showPaymentDetails(int)=0;

 //getters
	int getDepartmentStrength();
private:
	vector<string> departmentName;
	vector<string> departmentHOD;
	vector<int> departmentID;
	vector<int> departmentStrength;
	//Declaring an array to enter the department faculties
};

void Department::setDepartmentID(int id)
{
	departmentID.push_back(id);
}
void Department::setName(string name)
{
	departmentName.push_back(name);
}
void Department::setDepartmentStrength(int strength)
{
	departmentStrength.push_back(strength);
}
void Department::setHODName(string name)
{
	departmentHOD.push_back(name);
}
int Department::getDepartmentStrength()
{
	static int sum = 0;
	for (size_t i = 0; i < departmentStrength.size(); i++)
	{
		sum = sum + departmentStrength[i];
	}
	return sum;
}