#include <iostream>

// C program to generate random numbers

#include <time.h>
#include "windows.h"
using namespace std;

int GetRandom()
{
    return rand() % 100000 + 1;
}

struct StartSchool
{
public:
    StartSchool()
    {
        for (;;) {
            cout << "\n\r";

            cout << "Hey there! Welcome to your new school!" << endl;

            cout << "\n\r";

            cout << "\n\r";

            char startschool;

            cout << "you want to start your school? y/n _ ";
            cin >> startschool;

            if ( startschool == 'n' )
            {
                cout << "You got beaten up by your parents, poor kiddo, so I guess they won't let you play games anymore that is really bad" << endl;
            }

        }
    }

    int m_test1MATH;
    int m_test2MATH;
    int m_test3MATH;
    int m_test4MATH;
    int m_ExamMATH;
    int m_Experiment1SCIENCE;
    int m_Experiment2SCIENCE;
    int m_Experiment3SCIENCE;
    int m_Experiment4SCIENCE;
    int m_Experiment5SCIENCE;

};

int main()
{

    return 0;
}
