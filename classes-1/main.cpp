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
    Calculator calc;
    cout<<calc.add(10,5)<<endl;
    cout<<calc.deduct(10,5)<<endl;
    cout<<calc.multi(10,5)<<endl;
    cout<<calc.divide(10,5)<<endl;

    calc.m_member1 = 100;
    calc.m_member2 = 9.789;

    cout<<calc.m_member1<<endl;
    cout<<calc.m_member2<<endl;
    return 0;
}
