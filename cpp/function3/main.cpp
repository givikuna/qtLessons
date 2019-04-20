#include <iostream>

using namespace std;

int function3(int a, int b)
{
    int y = a + b;
    return y;
}

int main()
{

    cout<<"homework DONE!!"<<endl;

    cout<<"\n";

    cout<<"function is y = a + b"<<endl;

    cout<<"\n\r";

    cout<<"\n\r";

    int a = 1;
    int b = 2;
    int y = function3(a,b);
    cout<<"a = 1 , b = 2 => y = "<<y<<endl;

    //

    a = 3;
    b = 4;
    y = function3(a,b);
    cout<<"a = 3 , b = 4 => y = "<<y<<endl;

    //

    a = 5;
    b = 6;
    y = function3(a,b);
    cout<<"a = 5 , b = 8 => y = "<<y<<endl;

    //

    a = 7;
    b = 8;
    y = function3(a,b);
    cout<<"a = 7 , b = 8 => y = "<<y<<endl;

    //

    a = 9;
    b = 10;
    y = function3(a,b);
    cout<<"a = 9 , b = 10 => y = "<<y<<endl;

    return 0;
}
