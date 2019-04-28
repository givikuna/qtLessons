#include <iostream>

using namespace std;

int add(int a , int b)
{
    return(a + b);
}

int put_ur_minus_in_ur_butt(int a , int b)
{
    return(a - b);
}

int put_ur_multiply_in_your_gorgeous_fucking_butt(int a , int b)
{
    return(a * b);
}

int divide(int a , int b)
{
    return(a / b);
}

int main()
{


    int a, b;
/*
    for ( ; ; )
    {
        cout<<"your first number is = ";
        cin>>a;

        cout<<"yout second number is = ";
        cin>>b;

        cout<<"first * second = "<<multiply(a,b)<<endl;

        cout<<"\n\r";

        cout<<"-------------"<<endl;

        char confirm;

        cout<<"continue? y/n  _  ";
        cin>>confirm;

        if(confirm == 'y'){
            break;
        }
        else if(confirm == 'n'){
            continue;
        }

    }
*/
    for ( ; ; ) {

        char confirm;

        cout<<"what do you want to do? '+' or '-' or '*' or '/' :";
        cin>>confirm;

        if (confirm == '+'){
            cout<<"You are adding "<<endl;

            cout<<"your first number is = ";
            cin>>a;

            cout<<"your second number is = ";
            cin>>b;

            cout<<"\n\r";
            cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;
        }
        else if(confirm == '-'){
            cout<<"You are subtracting "<<endl;

            cout<<"your first number is = ";
            cin>>a;

            cout<<"your second number is = ";
            cin>>b;

            cout<<"\n\r";
            cout<<a<<" - "<<b<<" = "<<put_ur_minus_in_ur_butt(a,b)<<endl;
        }
        else if (confirm == '*') {
            cout<<"You are multiplying "<<endl;

            cout<<"your first number is = ";
            cin>>a;

            cout<<"your second number is = ";
            cin>>b;

            cout<<"\n\r";
            cout<<a<<" * "<<b<<" = "<<put_ur_multiply_in_your_gorgeous_fucking_butt(a,b)<<endl;
        }
        else if (confirm == '/') {
            cout<<"You are dividing "<<endl;

            cout<<"your first number is = ";
            cin>>a;

            cout<<"your second number is = ";
            cin>>b;

            cout<<"\n\r";
            cout<<a<<" / "<<b<<" = "<<divide(a,b)<<endl;
        }
        else{
            cout<<"you entered wrong symbol, try again"<<endl;
        }
        cout<<"--------------"<<endl;

        char countinues;

        cout<<"continue? y/n  :  ";
        cin>>countinues;

        if(countinues == 'y') {
            continue;
        }
        else if (countinues == 'n') {
            break;
        }

        else {
            break;
        }

    }

    //2moro namespaces


    return 0;
}
