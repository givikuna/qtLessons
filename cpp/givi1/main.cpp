#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c=0;

    a = 17;
    b = 25;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"------------"<<endl;
    c = b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"------------"<<endl;
    b = a;
    a = c;
    c = 0;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"------------"<<endl;
    cout<<"int size: "<<sizeof(int)<<endl;
    cout<<"short size: "<<sizeof(short)<<endl;
    cout<<"char size: "<<sizeof(char)<<endl;



    return 0;
}
