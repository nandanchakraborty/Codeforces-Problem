#include<iostream>
using namespace std;
class Sum {
  public:
    int a,b;
    long int c,d;
    int sumnum(int x,long y) {
        int res = x+y;
       cout<<"res ="<<res;

    }
    long int sumnum( int  p, int q,int r) {
        long int output = p+q+r;
       cout<<"output is "<<output;

    }



};
int main() {
    int a,b;
    Sum mysum;
    cout<<"enter 2 int number "<<endl;
    cin>>a>>b;
   mysum.sumnum(a,b);

}
