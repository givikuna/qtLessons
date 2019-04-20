#include <iostream>

using namespace std;

void showStupidVariable(int x)
{
    cout<<"Value = "<<x<<endl;
}

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

void T(char u)
{
    cout<<"."<<u<<endl;
}

int main()
{
    int a = 9, b = 10, c = 11;

    showStupidVariable(a);
    showStupidVariable(b);
    showStupidVariable(c);

    //char arr[10];

    char arr[10];

    arr[0]=71;
    arr[1]=73;
    arr[2]=86;
    arr[3]=73;
    arr[4]=33;
    arr[5]=33;
    arr[6]=33;
    arr[7]=33;
    arr[8]=33;
    arr[9]=0;

    //

    cout<<"\n\r";

    //

    cout<<"\n\r";

    //

    T(arr[0]);
    T(arr[1]);
    T(arr[2]);
    T(arr[3]);
    T(arr[4]);
    T(arr[5]);
    T(arr[6]);
    T(arr[7]);
    T(arr[8]);
    T(arr[9]);


    //

    cout<<"\n\r";

    //

    cout<<"\n\r";

    //

    cout<<"\n\r";

    //

    char cc[6]={'v', 'a', 'k', 'h', 'o', 0};
    cout<<cc<<endl;

    //

    cout<<"\n\r";

    //

    /* cout<<"\n\r"; */

    //

    return 0;
}
