#include <iostream>

using namespace std;

class Student
{
public:
    int m_grade;
    string m_name;
};

class Teacher
{
public:
    string m_name;
};

class School
{
public:
    string m_name;
    Student m_students[100];
    Teacher m_teacher[20];
};

int main()
{
    //
    School sch1;
    sch1.m_name = "Peet";

    cout<<sch1.m_name<<endl;
    //sch1.m_number

    return 0;
}
