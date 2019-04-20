#include <iostream>

using namespace std;

int function2(int x)
{
    int y = x*x;
    return y;
}

int main()
{
    int x = 1;
    int y = function2(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    x = 2;
    y = function2(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    x = -4;
    y = function2(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    return 0;
}
