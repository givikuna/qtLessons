#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    cout<<"value of n = "<<n<<endl;
    cout<<"address of n = "<<&n<<endl;

    cout<<"\n\r";

    int* pN = &n;
    cout<<"pointer value = "<<pN<<endl;
    cout<<"pointed n value = "<<(*pN)<<endl;

    cout<<"\n\r";

    int k = 12;
    pN = &k;
    cout<<"pointer value = "<<pN<<endl;
    cout<<"pointed k value = "<<(*pN)<<endl;

    cout<<"\n\r";

    int t = 80;
    pN = &t;
    cout<<"pointer value = "<<pN<<endl;
    cout<<"pointed y value = "<<(*pN)<<endl;

    cout<<"\n\r";

    int o = 17;
    pN = &o;
    cout<<"pointer value = "<<pN<<endl;
    cout<<"pointed o value = "<<(*pN)<<endl;

    cout<<"\n\r";

    int y = 4;
    pN = &y;
    cout<<"pointer value = "<<pN<<endl;
    cout<<"pointed y value = "<<(*pN)<<endl;

    cout<<"\n\r";

    int u = 567;
    pN = &u;
    cout<<"pointer value = "<<pN<<endl;
    cout<<"pointer u value = "<<(*pN)<<endl;

    //arr address is always equel to the first member address.

    // 1. call faunction
    // 2. find function address
    // 3. declar paramreters
    // 4. assign values



    return 0;
}
