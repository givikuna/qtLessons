
#include <iostream>

using namespace std;

int addition(int t, int u)// t=k and u = b
{
    return (t + u);
}

int subtraction(int k, int b)
{
    int c = k - b;
    return c;
}

int multiply(int k, int b)
{
    int c = k * b;
    return c;
}

int divide(int k, int b)
{
    int c = k / b;
    return c;
}

int main()
{
    //cout << "enter any number: ";

    cout<<"ENTER two different numbers and then they will be added, multyplied, divided, or subtracted"<<endl;

    cout<<"addition"<<endl;

    int k;
    cout<<"enter first number ";
    cin>>k;

    int b;
    cout<<"enter second number ";
    cin>>b;

    cout<<"first + second = "<<addition(k,b)<<endl;

    //

    cout<<"\n\r";

    //

    cout<<"subtraction"<<endl;

    cout<<"enter first number ";
    cin>>k;

    cout<<"enter second number ";
    cin>>b;

    cout<<"first - second = "<<subtraction(k,b)<<endl;

    //

    cout<<"\n\r";

    //

    cout<<"multiply"<<endl;

    cout<<"enter first number ";
    cin>>k;
    cout<<"your first number is: "<<k<<endl;

    cout<<"enter second number ";
    cin>>b;
    cout<<"your second number is: "<<b<<endl;

    int c = multiply(k,b);

    cout<<"first * second = "<<c<<endl;

    //

    cout<<"\n\r";

    //

    cout<<"divide"<<endl;

    cout<<"enter first number ";
    cin>>k;
    cout<<"your first number is: "<<k<<endl;

    cout<<"enter second number ";
    cin>>b;
    cout<<"your second number is: "<<b<<endl;

    c = divide(k,b);

    cout<<"first / second = "<<c<<endl;

    // for tomorrow > < <= >=


    return 0;
}
