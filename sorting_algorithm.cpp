
//bubble_sort;
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
 int arr[n+1];
 for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int j =0;j<n-j-1;j++)
    {
    if(arr[j]>arr[j+1])
    {
    swap(arr[j],arr[j+1]);
    }

    }
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";









}
