#include <iostream>

using namespace std;

int main()
{
    int nSize;
    cout<<sizeof(cout)<<endl;
    cout<<"Enter any number";
    cin>>nSize;
    int* pInt = new int[nSize];
    for (int i=0;i<nSize;i++) {
        pInt[i]=i;
    }

    for (int i=0;i<nSize;i++) {
        cout<<pInt[i]<<endl;
    }

    delete[] pInt;

    return 0;
}
