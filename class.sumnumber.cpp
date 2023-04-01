#include<iostream>
using namespace std;
class Sum {
  public:
    int a,b;
    long int c,d;
    int sumnum(int x,int y) {
        int res = x+y;
        return res;

    }
    long int sumnum(long int  p,long int q) {
        long int output = p+q;
        return output;

    }



};
int main() {
    int a,b;
    Sum mysum;
    cout<<"enter 2 int number "<<endl;
    cin>>a>>b;
    cout<<"the sum of two int num is "<<mysum.sumnum(a,b)<<endl;
    long int c,d;

    cout<<"enter 2 long int number "<<endl;
    cin>>c>>d;
    cout<<"the sum of two long int num is "<<mysum.sumnum(c,d)<<endl;
    }
