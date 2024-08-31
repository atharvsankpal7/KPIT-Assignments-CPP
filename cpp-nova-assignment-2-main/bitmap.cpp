#include <iostream>
#include <cstring>
#include "bitmap.h"
using namespace std;

Student::Student()
{
	// code here
}

Student::Student(int r, const char *n, int m1, int m2, int m3, int m4, int m5) // here m1,m2,m3,m4 and m5 are marks in each subject
{
	// code here
	rollno = r;
	strcpy(name, n);
	marks[0] = m1;
	marks[1] = m2;
	marks[2] = m3;
	marks[3] = m4;
	marks[4] = m5;
}

void Student::Accept()
{
	// code here
	cin >> rollno >> name >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
}

void Student::Display()
{
	// code here
	cout << rollno << " " << name << " " << marks[0] << " " << marks[1] << " " << marks[2] << " " << marks[3] << " " << marks[4] << endl;
}

float Student::calcAverage()
{
	float avg;
	// code here
	avg = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / (float)5;
	return avg;
}

char Student::calcGrade()
{
	char grade;
	// code here
	int avg = this->calcAverage();
	if (avg >= 60)
	{
		grade = 'A';
	}
	else if (avg >= 50)
	{
		grade = 'B';
	}
	else if (avg >= 40)
	{
		grade = 'C';
	}
	else
	{
		grade = 'D';
	}

	return grade;
}

int Student::highestMarks()
{
	int highest = marks[0];
	// code here
	for (int i = 1; i < 5; i++)
	{
		highest = max(highest, marks[i]);
	}
	return highest;
}

int Student::lowestMarks()
{
	int lowest = marks[0];
	// code here
	for (int i = 1; i < 5; i++)
	{
		lowest = min(lowest, marks[i]);
	}
	return lowest;
}
void Student::showResult(){
	// code here
	cout << "Roll No: " << rollno << endl;
	cout << "Name: " << name << endl;
	cout << "Marks: " << marks[0] << " " << marks[1] << " " << marks[2] << " " << marks[3] << " " << marks[4] << endl;
	cout << "Average: " << this->calcAverage() << endl;
	cout << "Grade: " << this->calcGrade() << endl;
	cout << "Highest Marks: " << this->highestMarks() << endl;
	cout << "Lowest Marks: " << this->lowestMarks() << endl;
}
