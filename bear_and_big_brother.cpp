//codeforces 991A solution in c++;
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,res = 1,sum = 1,i;
    cin>>a>>b;
    for(i =1;i<=10;i++)
    {
        a = a*3;
        b = b*2;
        if(a>b)

    {
       cout<<i;
        break;

    }



    }

    return 0;
}
