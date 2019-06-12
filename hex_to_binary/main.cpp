#include <iostream>

// C program to generate random numbers

#include <time.h>
#include "windows.h"
using namespace std;

int GetRandom()
{
    return rand() % 4 + 1;
}


int main()
{

    //

    int cc = 15567657;
    string vakho;

    for (int i = 0,iter = 0; i<(sizeof(int)*8); i++,iter++) {
        int k = (cc / 2);

        if((k*2) < cc) {
            vakho = "1" + vakho;
        }
        else {
            vakho = "0" + vakho;
        }
        cc = k;
        if (iter == 8) {
            vakho = " " + vakho;
            iter = 0;
        }

//        if (i == 7) {
//           vakho = " " + vakho;
//        }
//        else if (i == 15) {
//            vakho = " " + vakho;
//        }
//        else if (i == 23) {
//            vakho = " " + vakho;
//        }

    }
    cout << vakho << endl;
    //

    return 0;
}
