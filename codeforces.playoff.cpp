#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,s,k,p,capital=0,small=0,large=0,little =0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a>>s>>k>>p;
        if(a>s) {
            capital =a;
            small =s;
            }
            else {
                capital =s;
                small =a;

            }
            if(k>p)
            {
            large = k;
            little =p;

            }
            else {
            large =p;
            little =k;

            }
            if(small >large || capital<little )cout<<"NO"<<endl;
            else cout<<"YES"<<endl;


        }




}
