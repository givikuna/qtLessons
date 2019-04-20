#include <iostream>

using namespace std;

int addition(int a, int b)
{
    int c = a + b;
    return c;
}

//

int subtract(int d, int e)
{
    int f = d - e;
    return f;
}

//

int multyply(int g, int h)
{
    int i = g * h;
    return i;
}

//

int divide(int j, int k)
{
    int z = j / k;
    return z;
}
int main()
{

    int a = 10;
    int b = 9;
    int c = addition(a,b);

    cout<<"after 10+9 "<<"we got "<<c<<endl;

    //
    cout<<"\n\r";
    //

    a = 10;
    b = 6;
    c = subtract(a,b);

    cout<<"after 10-6 "<<"we got "<<c<<endl;

    //
    cout<<"\n\r";
    //

    a = 3;
    b = 15;
    c = multyply(a,b);

    cout<<"after 3*15 "<<"we got "<<c<<endl;

    //
    cout<<"\n\r";
    //

    a = 90;
    b = 45;
    c = divide(a,b);

    cout<<"after 90/45 "<<"we got "<<c<<endl;


    //

    cout<<"\n\r";

    //

    return 0;
}
