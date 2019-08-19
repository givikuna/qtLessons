#include <iostream>

using namespace std;

struct Student
{
    int _id;
    string _name;
    int _grade;
    float _score;
};

const int k = 100;

int main()
{
    // gaakete axali proeqti daarqvi "car " manqanebis array ,
    int a;
    cout<<"Global variable: "<<k<<endl;
    cout << " Amount of Student: ";
    cin >> a;

    //Student stArr[k];
    Student* stArr = new Student[a];

    for (int i = 0; i < a; i++) {
        cout << " Student #" << i + 1 << " ID Number: ";
        cin >> stArr[i]._id;
        cout << " Student #" << i + 1 << " Name:";
        cin >> stArr[i]._name;
        cout << " Student #" << i + 1 << " Grade: ";
        cin >> stArr[i]._grade;
        cout << " Student #" << i + 1 << " Final Score: ";
        cin >> stArr[i]._score;
        cout << "\n\r";
    }
    cout << " ----------------------------------------------------------------------------------- " << endl;
    for (int i = 0; i < a; i++) {
        cout << "Student #" <<  i + 1 << "'s ID Number: " << stArr[i]._id << endl;
        cout << "Student #" <<  i + 1 << "'s Name: " << stArr[i]._name << endl;
        cout << "Student #" <<  i + 1 << "'s Grade: " << stArr[i]._grade << endl;
        cout << "Student #" <<  i + 1 << "'s Final Score: " << stArr[i]._score  << endl;
        cout << "\n\r";
    }

    delete[] stArr;

    //sheavse da amoitane;

    cout << "\n\r";
    return 0;
}
