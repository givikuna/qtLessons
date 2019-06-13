#include <iostream>

using namespace std;

int main()
{
    int i , arr;
    char arr3[4] , y;
    arr3[0] = 'g';
    arr3[1] = 'i';
    arr3[2] = 'v';
    arr3[3] = 'y';

    for ( i = 0 ; i < 4 ; i++ )
    {
        cout << arr3[i] << endl;
    }

    cout << "\n\r" << endl;

    for ( i = 0; i < 4; i++ ) {
        cout << arr3[i + 1] << endl;
    }

    cout << "\n\r" << endl;

    for ( i = 0; i < 4; i++ ) {
        cout << arr3[i + 2] << endl;
    }

    cout << "  " ;
    cin >> y;

    if ( y == 'y' ) {
        cout << " ------------------------- " << endl;
    }

    else {
        cout << " ------------------------- " << endl;
    }



    return 0;
}
