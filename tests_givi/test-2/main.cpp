#include <iostream>

using namespace std;

int main()
{
    cout<<"Tests in pointers"<<endl;

    cout<<"\n\r";

    for (;;) {

        char confirm;

        cout<<"do you want to see all down? y/n  _  ";
        cin>>confirm;

        cout<<"---------"<<endl;

        if(confirm == 'y')
        {
            break;
        }

        else if (confirm == 'n') {
            break;
        }

        else {
            cout<<"\n\r";

            cout<<"you entered a wrong symbol . try again, write yes(y) or no(n)";
        }
    }

    cout<<"\n\r";

    cout<<"--------------------------------------------"<<endl;

    cout<<"\n\r";

    int r = 19;

    cout<<"r value = "<<r<<endl;
    cout<<"r address = "<<&r<<endl;
    //

    cout<<"\n";

    //
    int* y = &r;

    cout<<"pointer value = "<<y<<endl;
    cout<<"pointer r value = "<<(*y)<<endl;

    return 0;
}
