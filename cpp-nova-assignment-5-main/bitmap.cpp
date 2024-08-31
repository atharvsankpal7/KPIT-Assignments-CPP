#include "bitmap.h"

/*
    Method to calculate and return Result Grade for Student
*/

/*If TotalMarks is equal to -1, the grade returned should be '-' (hyphen character indicating invalid exam attempt).
● If TotalMarks is over 100, the grade returned should be '#'' (Pound sign or hash character indicating invalid total marks calculation).
● If TotalMarks is between 85 and 100 (both inclusive), the grade returned should be 'O'.
● If TotalMarks is between 61 and 84 (both inclusive), the grade returned should be 'A'.
● If TotalMarks is between 40 and 60 (both inclusive), the grade returned should be 'P'.
● If Student scores below 40, the grade should be 'F'.*/
char Student::CalculateGrade()
{
    char grade;
    if (TotalMarks == -1)
    {
        grade = '-';
    }
    else if (TotalMarks > 100)
    {
        grade = '#';
    }
    else if (TotalMarks >= 85)
    {
        grade = 'O';
    }
    else if (TotalMarks >= 61)
    {
        grade = 'A';
    }
    else if (TotalMarks >= 40)
    {
        grade = 'P';
    }
    else
    {
        grade = 'F';
    }
    return grade;
}

/*
    This method returns the name of the student
*/

std::string Student::GetStudentName()
{
    return StudentName;
}

/*
    This method returns the ID of the  student
*/

std::string Student::GetStudentId()
{
    return StudentId;
}

/*
    Parameterized constructor for Engineering Student
*/

EngineeringStudent::EngineeringStudent(std::string name, std::string id, int thMarks, int prMarks)
{
    StudentName = name;
    StudentId = id;
    TheoryMarks = thMarks;
    PractialMarks = prMarks;
}

/*
    Method to calculate and return Total Marks for EngineeringStudent
*/

void EngineeringStudent::CalculateMarks()
{
    TotalMarks = GetTheoryMarks() + GetPracticalMarks();
}

/*
    Method to return Practical marks of the EngineeringStudent
*/

int EngineeringStudent::GetPracticalMarks()
{
    return PractialMarks;
}

/*
    Method to return Theory marks of the EngineeringStudent
*/

char EngineeringStudent::GetTheoryMarks()
{
    return TheoryMarks;
}

/*
    Method to get total marks for engineering student
*/

int EngineeringStudent::GetTotalMarks()
{
    CalculateMarks();
    return TotalMarks;
}

/*
    Parameterized constructor for Architecture Student
*/

ArchitectureStudent::ArchitectureStudent(std::string name, std::string id, int dgMarks, int thMarks)
{
    StudentName = name;
    StudentId = id;
    DesignMarks = dgMarks;
    ThesisMarks = thMarks;
}

/*
    Method to calculate and return Total Marks for ArchitectureStudent
*/

void ArchitectureStudent::CalculateMarks()
{
    TotalMarks = GetDesignMarks() + GetThesisMarks();
}

/*
    Method to return Design marks of the ArchitectureStudent
*/

int ArchitectureStudent::GetDesignMarks()
{
    return DesignMarks;
}

/*
    Method to return Thesis marks of the ArchitectureStudent
*/
char ArchitectureStudent::GetThesisMarks()
{
    return ThesisMarks;
}

/*
    This method returns the total marks for architecture student
*/

int ArchitectureStudent::GetTotalMarks()
{
    CalculateMarks();
    return TotalMarks;
}