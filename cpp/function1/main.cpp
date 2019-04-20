#include <iostream>

using namespace std;

int incGivi(int x)
{
    int y = x + 1;
    return y;
}

int main()
{
    int x = 0;
    int y = incGivi(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    x = 1;
    y = incGivi(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    x = 3;
    y = incGivi(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    x = -1;
    y = incGivi(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    x = -2;
    y = incGivi(x);
    cout<<"("<<x<<", "<<y<<")"<<endl;

    //do linear functions in code. (as homework)

    return 0;
}
