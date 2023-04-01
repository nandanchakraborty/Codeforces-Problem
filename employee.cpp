#include<iostream>
using namespace std;
class Employee {
  public:
    string name,address;
    int year_of_joining;

};
int main() {
    string name,address;
    int year_of_joining;
    Employee myemployee1;

    myemployee1.name = "Robert";
    myemployee1.year_of_joining = 1994;
    myemployee1.address = "64C-wallstreet";


    Employee myemployee2;
    myemployee2.name = "Sam";
    myemployee2.year_of_joining = 2000;
    myemployee2.address = "68D-wallstrret";
    cout << "Name" <<" " <<"Year of joining"<<" "<<"address"<<endl;
    cout<<myemployee1.name<<" "<<  myemployee1.year_of_joining  << " " <<myemployee1.address<<endl;
}
