//class_declaretion;

#include<iostream>
using namespace std;
class nandan {
  public:
    float gpa;
    int id;
    //method_or_function_with_parameter:
    int mymethod(float n,int id) {
        cout<<endl<<"hello student"<< n << " "<< id;
    }



};


//main_function:
int main() {
    float gpa;
    int id;
    cin>> gpa>>id;
    nandan myobj;
    myobj.mymethod(gpa,id);
    //multiple_object:
    nandan myobj2;
    myobj2.mymethod(gpa,id);
    return 0;
}
