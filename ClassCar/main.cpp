#include <iostream>

using namespace std;

struct Car
{
public:
    Car(){ //constructor
        m_currentSpeed = 0;
         cout<<"started speed is: "<<m_currentSpeed<<endl;
    }
    // member functions / procedures
    int speed()
    {
        return m_currentSpeed;
    }
    cout<<"current speed is: "<<m_currentSpeed<<endl;

}
// properties / members
int m_currentSpeed;
int m_maxSpeed;
int m_doors;
};

int main()
{
Car ferary;
for(;;)
{
    char confirm;
    cout<<"continue speed up? y/n ";
    cin>>confirm;
    if(confirm == 'y') {
        ferary.speedUp();
    }
    else {

    void pushBreak()
    {
        m_currentSpeed = 0;
        cout<<"break down and speed is: "<<m_currentSpeed<<endl;
    }
    void speedUp()
    {
        m_currentSpeed += 1;break;
        }
        cout<<"break speed? y/n ";
        cin>>confirm;
        if(confirm == 'y'){
            ferary.pushBreak();
        }
    }
    return 0;
}
