#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,f1=0,f2=0;
    cin >>a>>b;
    if(a<b) f1=a;
    else f1=b;

        int res = abs(a-b);

        f2=res/2;

    cout<<f1<<" "<<f2;



}
