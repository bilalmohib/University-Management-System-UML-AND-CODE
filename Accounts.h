#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Accounts
{
public:
	Accounts()=default;
	~Accounts()=default;
	//setters
	void set_decided_salary(float);
	void set_payment_method(string);
	void set_total_working_hours(float);
	float get_calculated_salary(int);
	//gettters
	float get_decided_salary(int);
	string get_payment_method(int);
	float get_deducted_salary(int);
	float get_paid_salary(int);
	float get_bonus_salary(int);
private:
	vector<float> decidedSalary;
	vector<string> paymentMethod;
	vector<float> deductedSalary;
	vector<float> paidSalary;
	vector<float> bonusSalary;
	vector<float> totalWorkingHours;
};

void Accounts::set_decided_salary(float ds)
{
	decidedSalary.push_back(ds);
}
void Accounts::set_payment_method(string pm)
{
	paymentMethod.push_back(pm);
}
void Accounts::set_total_working_hours(float twh)
{
	totalWorkingHours.push_back(twh);
}
float Accounts::get_calculated_salary(int index)
{
	
	paidSalary[index] = (decidedSalary[index] - deductedSalary[index])+get_bonus_salary(index);

	return paidSalary[index];
}
float Accounts::get_bonus_salary(int index)
{
	if (totalWorkingHours[index] > 10)
	{
		bonusSalary[index] = bonusSalary[index] * 2;
	}
	return bonusSalary[index];
}
string Accounts::get_payment_method(int index)
{
	return paymentMethod[index];
}
float Accounts::get_deducted_salary(int index)
{
	if (totalWorkingHours[index] < 12)
	{
		float count = totalWorkingHours[index] - 12;
		deductedSalary[index] = paidSalary[index] - (decidedSalary[index])*(count);
	}
	return deductedSalary[index];
}
float Accounts::get_paid_salary(int index)
{
	return paidSalary[index];
}
float Accounts::get_decided_salary(int index)
{
	return decidedSalary[index];
}