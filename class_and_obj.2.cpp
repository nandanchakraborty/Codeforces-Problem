/* Write a program to print the area of a rectangle by creating a class named
'Area' having two functions. First function named as 'setDim' takes the length
and breadth of the rectangle as parameters and the second function named as 'getArea'
returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/

#include<iostream>
using namespace std;
class Area {
  public:
    int length;
    int breadth;
    int setDim( int l, int b) {

        length = l;
        breadth = b;

    }

    int  getArea() {
        return length*breadth;


    }

};
int main() {
    Area mytask;
    int length,breadth;
    mytask.setDim(4,5);

    cout<<"The area is "<<mytask.getArea()<<endl;
    return 0;


}
