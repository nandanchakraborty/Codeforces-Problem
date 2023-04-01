#include<iostream>
using namespace std;
int main() {
    int n,i,j,num,res=0,coun=0;
    cin >> n;
    for(i =0; i<n; i++) {
        cin >> num;
        if(num>0 && num<=10) cout<<num<<endl;

        else if(num>10 && num<=100) {

            res=num/10;
            cout << 9+res<<endl;
        } else if(num>100 && num<=1000) {
            if(num%100 == 0) {
                res = num/100;
                cout<<19+res<<endl;
            } else cout <<19;


        } else if(num>1000 && num<=10000) {
            if(num%1000 == 0) {
                res = num/1000;
                cout<<29+res<<endl;
            } else cout <<29;

        } else if(num>10000 && num<=100000) {
            if(num%10000 ==0) {
                res = num/10000;
                cout<<39+res;

            } else cout<<39;
        } else if(num>100000 && num<=999999) {
            if(num%100000==0) {
                res = num/100000;
                cout<<49+res;
            } else cout<<49;
        }

    }




}
