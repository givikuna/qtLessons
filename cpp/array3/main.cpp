#include <iostream>

using namespace std;

int main()
{
    int arr[10];

/*

    arr[0] = 0;
    arr[1] = 1;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;

*/

    for(int i=0; i<10; i++)
    {
        arr[i] = i;
    }

    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\n"<<"\r";

    char name[] = "Givi Tsvariani";

    for(int i=0; i<14; i++)
    {
        cout<<name[i]<<endl;
    }   

    return 0;
}
