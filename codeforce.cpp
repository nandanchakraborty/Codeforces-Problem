//codeforce_problem_no_158A
//problem_name_next_round;



#include<iostream>
using namespace std;
int main()
{
int n,k,a[52],cou=0;
 cin >> n >> k;
 for(int i =0;i<n;i++)
 {
 cin >> a[i];
  }
for(int i =0;i<n;i++)
 {
        if(a[i]>=a[k-1]&&a[i]>0)
            cou++;
    }
cout << cou;


}
