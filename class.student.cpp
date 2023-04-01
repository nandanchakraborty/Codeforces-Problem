#include<iostream>
using namespace std;
class Student {
  public:
    string name;
    long int id;
    float cgpa;
    void student(float x) {
        cout<<"The average cgpa is "<<x;

    }



};
int main() {
    Student mys;
    string name;
    long int id;
    float cgpa;
    cout<<"enter name ";
    cin>>name;
    cout<<"enter id and cgpa ";
    cin>>id>>cgpa;
    mys.student(cgpa);
    Student mys1;
    cout<<"enter name ";
    cin>>name;
    cout<<"enter id and cgpa ";
    cin>>id>>cgpa;
    mys1.student(cgpa);




}
