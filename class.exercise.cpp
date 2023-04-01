#include<iostream>
using namespace std;
class Student {
  public:
    string name;
    int mark1,mark2;
    Student(string nam,int x,int y) {

        name = nam;
        mark1 = x;
        mark2=y;
    }
    int calc_dis() {
        return ((mark1+mark2)/2);
    }
    void display() {
        cout<<"student name:" <<name <<"the average of two number is "<<calc_dis()<<endl;

    }

};

int main() {

    string name;
    int m1,m2;
    cout << "Enter name:";
    cin>> name;
    cout << "Enter marks of two subjects:";
    cin>> m1;
    cin>> m2;
    Student student1(name,m1,m2);
    student1.display();

    return 0;
}
