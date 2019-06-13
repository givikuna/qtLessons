#include <iostream>

using namespace std;

int main()
{

    int arr1[]={55,11,33,22,445,44,45,178,78,346,1};


    int max = 10;
    for (int j=0; j<max; j++)
    {
        for (int i=0; i<max; i++)
        {
            if ( arr1[i] > arr1[i+1] ) {
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
