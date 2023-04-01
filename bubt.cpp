
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
int n,i;
cin >>n;

for(i=0;i<n;i++)
{

cin>>s;
transform(s.begin(), s.end(), s.begin(), ::toupper);
if(s=="YES") cout<<"yes"<<endl;
else cout<<"no"<<endl;


}

return 0;





return 0;
}
