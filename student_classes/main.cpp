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

};

int main()
{

    return 0;
}
