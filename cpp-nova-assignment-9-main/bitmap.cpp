#include <iostream>
#include <cstring>
#include "bitmap.h"
using namespace std;

Employee::Employee()
{
	// code here
	empid = 0;
	strcpy(name, "trash");
	basicsalary = 0;
}
Employee::Employee(int id, const char *n, double sal)
{
	// code here
	empid = id;
	strcpy(name, n);
	basicsalary = sal;
}

double Employee::GetBasicSalary()
{
	// code here
	return basicsalary;
}

void Employee::Display()
{
	// code here
	cout << "Employee ID: " << empid << "name: " << name << "basic salary: " << basicsalary << endl;
}

WageEmployee::WageEmployee()
{
	// code here
}

WageEmployee::WageEmployee(int id, const char *n, double sal, int h, int r) : Employee(id, n, sal)
{
	// code here
	hours = h;
	rate = r;
}

double WageEmployee::CalcNetSalary()
{
	// code here
	return GetBasicSalary() + hours * rate;
}

bool WageEmployee::IsTaxable()
{
	// code here
	return CalcNetSalary() >= 500000 ;
}
void WageEmployee::Display()
{
	// code here
	Employee::Display();
	cout << "hours: " << hours << "rate: " << rate << endl;
}

SalesPerson::SalesPerson()
{
	// code here
}

SalesPerson::SalesPerson(int id, const char *n, double sal,
						 int h, int r, int s, int c) : WageEmployee(id, n, sal, h, r)
{
	// code here
	sales = s;
	comm = c;
}

double SalesPerson::CalcNetSalary()
{
	// code here
	return WageEmployee::CalcNetSalary() + sales * comm;
}

bool SalesPerson::IsTaxable()
{
	// code here
	return CalcNetSalary() >= 500000;
}

void SalesPerson::Display()
{
	// code here
	WageEmployee::Display();
	cout << "sales: " << sales << "comm: " << comm << endl;
}
