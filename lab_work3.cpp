//codeforce_problem_282A
//problem_name___-BIT++

#include<iostream>
using namespace std;

int main()

{
   string b;

   int n,p=0;

   cin>>n;

   while(n--)

   {
       cin>>b;

       if(b[0]=='-'||b[2]=='-')

       {
           p=p-1;
       }

       else if(b[0]=='+'||b[2]=='+')

       {
           p=p+1;
       }
   }
   cout<<p<<endl;

}
