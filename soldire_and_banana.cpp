//codeforces 546A solution in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,n,w,res = 0,mon = 0,i,no = 0;
    cin>>k>>n>>w;
    for(i = 1;i<=w;i++)
    {
        res = res+(k*i);
    }
    mon = (res - n);

    if(res>n)
    {
        cout<<mon;
    }

else cout<<no;


 return 0;

 }
