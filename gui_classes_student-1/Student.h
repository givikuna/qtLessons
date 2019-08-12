#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student
{
public:
    Student();
    Student(QString sFirstame, QString sLastName);
    ~Student();

private:
    QString m_sFirstame;
    QString m_sLastName;
};

#endif // STUDENT_H
