#include <iostream>

using namespace std;

int main()
{
    int idArr[3];
    int gradeArr[3];
    string nameArr[3];
    float scoreArr[3];
    for (int j = 0; j < 3; j++) {
        cout << " Student " << j + 1 << endl;
        cout << "\n\r";
        string name;
        cout << " Student's ID Number: ";
        cin >> idArr[j];
        cout << " Student's Grade: ";
        cin >> gradeArr[j];
        cout << " Srudent's Name: ";
        cin >> nameArr[j];
        cout << " Student's Final Score: ";
        cin >> scoreArr[j];
        cout << "\n\r";
        cout << "\n\r";
        cout << " ------------------------------- " << endl;
        cout << "\n\r";
        cout << "\n\r";
    }
    for (int j = 0; j < 3; j++) {
        cout << " Student " << j+1 << " ID Number: " << idArr[j] << endl;
        cout << " Student " << j+1 << " Grade: " << gradeArr[j] << endl;
        cout << " Student " << j+1 << " Name: " << nameArr[j] << endl;
        cout << " Student " << j+1 << " Final Score: " << scoreArr[j] << endl;
        cout << " ------------------------------- " << endl;
    }
}

/*
int main()
{
    int arr [10];
    for (int i = 0; i < 10; i++) {
        int j = i + 1;

        cout << " write down number " << j << " member of array ";
        cin >> j;

        arr[i] = j;
    }
    cout << "\n\r";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
*/
/*
int main()
{
    int id;
    char name[10];
    int age;
    int grade;
    float finalScore;

    cout << " Child's ID Nubmer: ";
    cin >> id;
    cout << "\n\r";
    //
    cout << " Student's First Name: ";
    cin >> name;
    cout << "\n\r";
    //
    cout << " Student's age: ";
    cin >> age;
    cout << "\n\r";
    //
    cout << " Student's Grade: ";
    cin >> grade;
    cout << "\n\r";
    //
    cout << " Student's Final Score: ";
    cin >> finalScore;
    cout << "\n\r";

    cout << " ID Number is " << id << endl;
    //
    cout << " Name is " << name << endl;
    //
    cout << " Age is " << age << endl;
    //
    cout << " Grade is " << grade << endl;
    //
    cout << " Final Score is " << finalScore << endl;

    //

    cout << "\n\r";

    //

    return 0;
}
*/
