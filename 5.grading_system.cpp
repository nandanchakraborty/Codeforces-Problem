//5.grading_system.
#include <iostream>
using namespace std;


int main() {
    int marks;
    cout << "Enter the marks obtained: ";
    cin >> marks;

    switch(marks) {
    case 80 ... 100:
        cout <<"A+";
        break;
    case 75 ... 79:
        cout<< "A";
        break;
    case 70 ... 74:
        cout<< "A-";
        break;
    case 65 ... 69:
        cout<<  "B+";
        break;
    case 60 ... 64:
        cout<< "B";
        break;
    case 55 ... 59:
        cout<< "B-";
        break;
    case 50 ... 54:
        cout<< "C+";
        break;
    case 45 ... 49:
        cout<< "C";
        break;
    case 40 ... 44:
        cout<<  "D";
        break;

    default :
        cout<<  "F";
    }

}

