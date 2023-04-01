#include<iostream>
using namespace std;
int main() {
    int n,i,j,num,res=0,coun=0;
    cin >> n;
    for(i =0; i<n; i++) {
        cin >> num;
        if(num<=10) cout<<num<<endl;

 else
 {
 while (num > 10)
    num /= 10 ;
    if (num % 10 != 0)
      coun += 1;

      }
      cout << coun;
}}

