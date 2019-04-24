#include <iostream>

using namespace std;

int main()
{
    int k =56;
    cout<<"k-value= "<<k<<endl;
    cout<<"k-address= "<<&k<<endl;
    cout<<"================================================= "<<endl;

    int kk[]={5,7,9,11};
    cout<<"kk-1-value= "<<kk[0]<<endl;
    cout<<"kk-address= "<<kk<<endl;
    cout<<"kk-address= "<<&kk<<endl;
    cout<<"kk-address= "<<&kk[0]<<endl;
    cout<<"================================================= "<<endl;

    cout<<"kk-4-value= "<<kk[3]<<endl;
    cout<<"kk-4-address= "<<&kk[3]<<endl;
    cout<<"================================================= "<<endl;

    for(int i = 0; i<4; i++){
        cout<<"kk-"<<i<<"-value= "<<kk[i]<<endl;
        cout<<"kk-"<<i<<"-address= "<<&kk[i]<<endl;
        cout<<"--"<<endl;
    }
    cout<<"================================================= "<<endl;

    float f = 56.789;
    cout<<"f-value= "<<f<<endl;
    cout<<"f-address= "<<&f<<endl;
    cout<<"================================================= "<<endl;

    /* 1. Declare array ff (5 numbers)
     * 2. initialize in cicle
     * 3. show values and addresses in cicle
     */

    //homework

    cout<<"\n\r";
    cout<<"                      HOMEWORK"<<endl;
    cout<<"--------------------------------------------------"<<endl;

    float ff[5];

    for (int y = 0;y<5;y++) {
        ff[y] = y + 1.5;
    }

    cout<<"\n\r";
    cout<<"-------------"<<endl;
    cout<<"\n\r";

    for (int y = 0;y<5;y++) {
        cout<<"value = "<<ff[y]<<endl;
        cout<<"address = "<<&ff[y]<<endl;
        cout<<"---"<<endl;
    }

    return 0;
}
