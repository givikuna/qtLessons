#include <iostream>

using namespace std;

int main()
{
    int i,j,temp,arr2[6],arr1[]={15,4,3,8,18,12};

    for (int i=0; i<6;i++) {
        //if(arr1[i] > arr1[i+1])
        //if (arr1[i] )
    }

    // control results
    for (i=0; i<6;i++) {
        cout<<arr1[i]<<endl;
    }
    cout <<"\n\r";
    for (i=0; i<6;i++) {
        cout<<arr1[i-1]<<endl;
    }

    //

    cout<<"\n\r";

    cout << "\n";

    //

    i=0;

    int arr3[500], arr4[500], p;

    cout << "Enter number of elements in array \n";
    cin >> p;

    cout << "Enter " << p << " numbers \n";

    for(i = 0; i < p; i++){
        cin >> arr3[i];
    }

    // Copy numbers from arr3 to arr4 in
    // reverse order
    for(i = 0; i < p; i++){
        arr4[i] = arr3[p-i-1];
    }
    // Print Reversed array
    cout << "Reversed Array\n";

    cout<<"\n\r";

    for(i = 0; i < p; i++){
        cout << arr4[i] << " ";
        }
    cout<<"\n\r";


    return 0;
}
