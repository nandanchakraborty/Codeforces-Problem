//Find the area of a triangle and Rectangle using inheritance
#include<bits/stdc++.h>
using namespace std;
class Shape {
  protected :
    float width,height;

  public:
    void set_data(float a,float b) {

        width =a;
        height =b;

    }
};
class Rectangle : public Shape {
  public:
    float area() {
        return (width*height);
    }

};
class Triangle:public Shape {
  public :
    float area() {
        return (width*height/2);

    }
};
int main() {
    Rectangle rac;
    rac.set_data(10,5);
    Triangle tri;
    tri.set_data(2,5);
    cout<<"area of Ractangle is "<<rac.area()<<endl;
    cout<<"area of Triangle is "<<tri.area()<<endl;


}
/*types of inheritance
1.single
2.multiple
3.hirarchical
4.multilevel */
//single inheritance:one base class and one derived class
//For example
#include<iostream>
using namespace std;
class Myclass {
  public:
    Myclass() {
        cout<<"this is a base class"<<endl;

    }

};
class derived:public Myclass { //derived class

  public :
    verived() {
        cout<<"this is a derived class"<<endl;

    }

};
//2.multiple inheritance:sub class is inherit from more than one base class;

include<iostream>
using namespace std;
class Myclass {
  public:
    Myclass() {
        cout<<"this is a base class"<<endl;

    }

};
class My2ndclass {
  public:
    My2ndclass() {
        cout<<"this is my second base class"<<endl;
    }
};
class derived:public Myclass,public My2ndclass { //derived class of multiple inheritance

  public :
    verived() {
        cout<<"this is a derived class"<<endl;

    }

};
//Hirarchical inheritance :more than one sub class in inherited from a single base class
#include<bits/stdc++.h>
using namespace std;
class Shape {
  protected :
    float width,height;

  public:
    void set_data(float a,float b) {

        width =a;
        height =b;

    }
};
class Rectangle : public Shape {
  public:
    float area() {
        return (width*height);
    }

};
class Triangle:public Shape {
  public :
    float area() {
        return (width*height/2);

    }
};
//4.Multilevel inheritance:a derived class is created from another derived class;
#include<iostream>
using namespace std;
class Vehicle {
  public:
    Vehicle() {
        cout<<"this is a vehicle "<<endl;


    }

};
class fourwheel:public Vehicle {
    fourwheel() {
        cout<<"object with four wheels are vehicles"<<endl;

    }
};
class car:public fourwheel {
    car() {
        cout<<"car has 4 wheel"<<endl;

    }
};

