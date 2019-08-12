#include "Student.h"

Student::Student()
{
    m_sFirstame = "";
    m_sLastName = "";
}

Student::Student(QString sFirstame, QString sLastName)
{
    m_sFirstame = sFirstame;
    m_sLastName = sLastName;
}

Student::~Student()
{
    int n = 9;
}
