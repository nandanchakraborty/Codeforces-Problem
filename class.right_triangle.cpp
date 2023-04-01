#include<iostream>
#include<math.h>
using namespace std;
class Righttriangle {
public:
    int p,b;

    Righttriangle() {
        cout<<"now calculating the area and digonal"<<endl;

    }
    double  area(int x,int y) {
        double area = .5*x*y;
        return area;

    }
    double diagonal(int x,int y) {
        double  dio = sqrt(x*x + y*y);
        return dio;

    }

};
int main() {
double p,b;

   Righttriangle m;
    cout<<"enter the values of parperdicular and base of the right angle "<<endl;
    cin>>p>>b;
    cout<<"the area of the right triangle is "<<m.area(p,b)<<endl;
        cout<<"the diagonal of the right triangle is "<<m.diagonal(p,b)<<endl;

}
