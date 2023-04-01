
//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
//by creating a class named 'Triangle' with a function to print the area and perimeter.
#include<iostream>
using namespace std;
class Triangle {
  public:

    void area(int a,int b,int c) {
        double  result = .5*b*c;
        cout<<"premeter is "<< result;

    }

};
int main() {
    int a,b,c;
    double area;
    Triangle Mytask;
    cin>>a>>b>>c;
    Mytask.area(a,b,c);
    return 0;







}
