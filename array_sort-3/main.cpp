#include <iostream>

using namespace std;

int main()
{

    int arr1[11];

    cout<<"Write Down eleven numbers _ ";
    cin>>arr1[0];
    cin>>arr1[1];
    cin>>arr1[2];
    cin>>arr1[3];
    cin>>arr1[4];
    cin>>arr1[5];
    cin>>arr1[6];
    cin>>arr1[7];
    cin>>arr1[8];
    cin>>arr1[9];
    cin>>arr1[10];

    cout<<"\n\r";

    int max = 10;
    for (int j=0; j<max; j++)
    {
        for (int i=0; i<max; i++)
        {
            if ( arr1[i] < arr1[i+1] )
            {
                int tmp = arr1[i];
                arr1[i] = arr1[i+1];
                arr1[i+1] = tmp;
            }
        }
    }

    for (int i=0; i<max+1;i++) {
        cout<<arr1[i]<<endl;
    }

    return 0;
}
