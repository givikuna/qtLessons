#include <iostream>

using namespace std;

int main()
{

    int arr1[5]={55,44,33,22,11};
    int arr2[5];

    int max = 5;
    for (int i=0; i<max; i++) {
        int j = max - 1 -i;
        arr2[i]=arr1[j]; // or arr2[i]=arr1[max - 1 -i];
    }

    for (int i=0; i<5;i++) {
        cout<<arr2[i]<<endl;
    }

    return 0;
}
