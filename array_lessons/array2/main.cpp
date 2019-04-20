#include <iostream>

using namespace std;

int main()
{

    int a = 5;
    cout<<"before +1: "<<a<<endl;
    a = a+1;
    cout<<"after +1: "<<a<<endl;
    a++;
    cout<<"after ++: "<<a<<endl;
    //
    a = a+5;
    cout<<"after +5: "<<a<<endl;
    a = a-3;
    cout<<"after -3: "<<a<<endl;
    //
    a = a/3;
    cout<<"after /3: "<<a<<endl;

    a+=7;
    cout<<"after +=7: "<<a<<endl;

    //
    a/=2;
    cout<<"after /=2: "<<a<<endl;


    // all actions to show including deduct, multiply and divide
    // create array of integer variables

    return 0;
}

