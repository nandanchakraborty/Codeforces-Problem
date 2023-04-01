#include<iostream>
using namespace std;
class Point{
private :
    int x;
    int y;
    public:
  Point(int x1,int y1)
    {
    x=x1;
    y = y1;

    }
   Point(const Point& p1)
    {
    x=p1.x;
    y=p1.y;

    }
    int getx(){return x;}
    int gety(){return y;}


};
int main()
    {
    Point mark(10,15);
    Point p2=mark;
    cout<<"x = "<<mark.getx()<<endl;
    cout<<"Y= "<<mark.gety()<<endl;

    }
