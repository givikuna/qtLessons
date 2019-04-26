#include <iostream>

using namespace std;

int function(int m, int t, int u)
{
    int z = m + t + u;
    return z;
}

int main()
{

    cout<<"z = m + t + u"<<endl;

    cout<<"\n\r";

    cout<<"-------------------------------------------------------"<<endl;

    cout<<"\n\r";


    int m = 0;
    int t = 0;
    int u = 0;
    int z = function(m,t,u);

    //

    cout<<"\n\r";

    //

    m = 0;
    cout<<"your m is = ";
    cin>>m;

    t = 0;
    cout<<"your t is = ";
    cin>>t;

    u = 0;
    cout<<"your u is = ";
    cin>>u;
    z = function(m,t,u);
    cout << "when m = "<<m<<","<<" t = "<<t<<","<<" and u = "<<u<<" => z = "<<z<<"."<<endl;

    //

    cout<<"\n\r";

    //

    m = 7;
    cout<<"your m is = ";
    cin>>m;

    t = 8;
    cout<<"your t is = ";
    cin>>t;

    u = 9;
    cout<<"your u is = ";
    cin>>u;

    z = function(m,t,u);
    cout << "when m = "<<m<<","<<" t = "<<t<<","<<" and u = "<<u<<" => z = "<<z<<"."<<endl;

    //

    cout<<"\n\r";

    //

    m = 0;
    cout<<"your m is = ";
    cin>>m;

    t = 0;
    cout<<"your t is = ";
    cin>>t;

    u = 0;
    cout<<"your u is = ";
    cin>>u;

    z = function(m,t,u);

    cout << "when m = "<<m<<","<<" t = "<<t<<","<<" and u = "<<u<<" => z = "<<z<<"."<<endl;

    return 0;
}
