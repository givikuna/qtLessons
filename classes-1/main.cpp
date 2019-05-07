
#include <iostream>

using namespace std;

struct Calculator
{
    int add(int a, int b)
    {
        return (a+b);
    }
    int deduct(int a, int b)
    {
        return (a-b);
    }
    int multi(int a, int b)
    {
        return (a*b);
    }
    int divide(int a, int b)
    {
        return (a/b);
    }

    int m_member1;
    float m_member2;
};

int main()
{
/*
    Calculator calc;
    cout<<calc.add(10,5)<<endl;
    cout<<calc.deduct(10,5)<<endl;
    cout<<calc.multi(10,5)<<endl;
    cout<<calc.divide(10,5)<<endl;

    calc.m_member1 = 100;
    calc.m_member2 = 9789;

    cout<<calc.m_member1<<endl;
    cout<<calc.m_member2<<endl;

    cout<<"+";
    cin>>a;

    cout<<"+";
    cin>>b;

    cout<<"+"<<calc.add(a,b)<<endl;

    //

    */

    Calculator calc;

    for ( ; ; ){

        char go;

        cout<<"what do you want to do '+', '-', '*',  '/' : ";
        cin>>go;

        int a,b;

        if(go == '+'){
            cout<<"-------------------------------------------"<<endl;
            cout<<"                   You are adding"<<endl;

            //

            cout<<"write your first number  _  ";
            cin>>a;
            cout<<"your first number is = "<<a<<endl;

            cout<<"write your second number  _  ";
            cin>>b;
            cout<<"yout second number is = "<<b<<endl;

            cout<<a<<" + "<<b<<" = "<<calc.add(a,b)<<endl;
           }

        else if (go == '-') {
            cout<<"-------------------------------------------"<<endl;
            cout<<"             You are subtracting           "<<endl;

            //

            cout<<"write your first number  _  ";
            cin>>a;
            cout<<"your first number is = "<<a<<endl;

            cout<<"write your second number  _  ";
            cin>>b;
            cout<<"your second number is = "<<b<<endl;

            cout<<a<<" - "<<b<<" = "<<calc.deduct(a,b)<<endl;

        }

        else if (go == '*') {
            cout<<"-------------------------------------------"<<endl;
            cout<<"             You are multiplying           "<<endl;

            //

            cout<<"write your first number  _  ";
            cin>>a;
            cout<<"your first number is = "<<a<<endl;

            cout<<"write your second number  _  ";
            cin>>b;
            cout<<"your second number is = "<<b<<endl;

            cout<<a<<" * "<<b<<" = "<<calc.multi(a,b)<<endl;

        }

        else if (go == '/') {
            cout<<"-------------------------------------------"<<endl;
            cout<<"             You are divide                "<<endl;

            //

            cout<<"write your first number  _  ";
            cin>>a;
            cout<<"your first number is = "<<a<<endl;

            cout<<"write your second number  _  ";
            cin>>b;
            cout<<"your second number is = "<<b<<endl;

            cout<<a<<" / "<<b<<" = "<<calc.divide(a,b)<<endl;
        }
        else {
            cout<<"you entered a wrng sumbol, try again!"<<endl;
            continue;
        }

        bool checkBreak = false;//
        bool checkContinue = false;//
        for( ; ; )
        {
            char confirm;
            cout<<"do you want to continue?  y/n :  ";
            cin>>confirm;

            if(confirm == 'y'){
                checkContinue = true;
                break;
            }
            else if (confirm == 'n') {
                checkBreak = true;
                break;
            }
            else {
                cout<<"---"<<endl;
                cout<<"you entered wrong symbol, try again : "<<endl;
            }
        }

        if(checkBreak == true){
            break;
        }
        if(checkContinue == true){
            continue;
        }

        //

    }

    return 0;
}
