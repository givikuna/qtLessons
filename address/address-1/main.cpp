#include <iostream>

using namespace std;

int main()
{
    int G = 71;

    cout<<"value = "<<G<<endl;
    cout<<"address = "<<&G<<endl;

    cout<<"\n";

    int GG = 72;

    cout<<"value = "<<GG<<endl;
    cout<<"address = "<<&GG<<endl;

    // create array of int with 5 members:
    // 1. initilize in loop
    // 2. show values in loop
    // 3 show addresses in loopscas
    
    cout<<"\n\r";
    cout<<"\n\r";

    int arr[5];

    for (int i=0;i<5;i++)
    {
     arr[i] = i  + 1;
    }

    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"\n\r";

    int T = 71;

    cout<<"value = "<<T<<endl;
    cout<<"address = "<<&T<<endl;

    int arr1[3];

    for (int H=0;H<3;H++)
    {
        arr1[H] = T;
    }

    cout<<"\n";

    for (int H=0;H<3;H++)
    {
        cout<<arr1[H]<<endl;
    }

    for (int H=0;H<3;H++)
    {
        cout<<&arr1[H]<<endl;
    }
    ////////////////////////


    return 0;
}
