#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
vector<int> v;
int n,a,res=0;
cin>>n;
for(int i =0;i<n;i++)
{
cin>>a;
v.push_back(a);
}
if(n%2==0)
{
for(auto i= v.rbegin;i<=n/2;i++)
{
 res = res+v.at(i);

}

}
cout<<res;
}
