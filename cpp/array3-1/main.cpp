#include <iostream>

using namespace std;

int main()
{
    /*
     loop "Vakhtangi Tsvariani"

    use operators for number 15
    ++, --, +=, -=. *=, /=
    new projct array3-1
     */
    int/**/ a = 15;
    cout<<"just 15: "<<a<<endl;
    //
    a++;
    cout<<"after ++: "<<a<<endl;
    //
    a--;
    cout<<"after --: "<<a<<endl;
    //
    a+=1;
    cout<<"after +=1: "<<a<<endl;
    //
    a-=1;
    cout<<"after -=1: "<<a<<endl;
    //
    a*=2;
    cout<<"after *=2: "<<a<<endl;
    //
    a/=3;
    cout<<"after /=3: "<<a<<endl;
    //


    /*-------------*/
    cout<<"\n"<<"\r";


    char name[] = "Vakhtangi Tsvariani";

    for(int i=0; i<19; i++)
    {
        cout<<name[i]<<endl;
    }

    return 0;
}
