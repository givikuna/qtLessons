#include <iostream>

using namespace std;

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int subtract(int x, int y)
{
    int z = x - y;
    return z;
}

int divide(int x, int y)
{
    int z = x / y;
    return z;
}

int multiply(int x, int y)
{
    int z = x * y;
    return z;
}

// 4 moqmodeba da shemotana "cin"

int main()
{
    //int a = 10;
    //int b = 5;
    //int c = sum(a, b);

    //cout<<"\n\r"<<c<<endl;

    //a = 25;
    //b = 45;
    //c = sum(a,b);
    //cout<<"\n\r"<<c<<endl;

    //a = 676;
    //b = 457;
    //c = sum(a,b);
    //cout<<"\n\r"<<c<<endl;

    char whatIwant;

    cout << " Choose what u want: +; -; *; /   __   ";
    cin >> whatIwant;


    int number1;
    int number2;
    int answer;


    if (whatIwant == '+')
    {
        cout << " you chose to sum " << endl;
        cout << "\n\r" ;
        cout << " your first number is = ";
        cin >> number1;
        cout << " your second number is = ";
        cin >> number2;
        answer = sum(number1, number2);
        cout << " you answer is = " << answer << endl;
    }
    else if (whatIwant == '-')
    {
        cout << " you chose to subtract " << endl;
        cout << "\n\r" ;
        cout << " your first number is = ";
        cin >> number1;
        cout << " your second number is = ";
        cin >> number2;
        answer = subtract(number1, number2);
        cout << " you answer is = " << answer << endl;
    }
    else if (whatIwant == '*')
    {
        cout << " you chose to multiply " << endl;
        cout << "\n\r" ;
        cout << " your first number is = ";
        cin >> number1;
        cout << " your second number is = ";
        cin >> number2;
        answer = multiply(number1, number2);
        cout << " you answer is = " << answer << endl;
    }
    else if (whatIwant == '/')
    {
        cout << " you chose to divide " << endl;
        cout << "\n\r" ;
        cout << " your first number is = ";
        cin >> number1;
        cout << " your second number is = ";
        cin >> number2;
        answer = divide(number1, number2);
        cout << " you answer is = " << answer << endl;
    }

    cout << "\n\r" ;

    return 0;
}
