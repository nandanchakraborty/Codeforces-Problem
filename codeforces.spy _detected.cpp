#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >>n;
    int p;
    for(int i =0; i<n; i++) {
        cin >>p;
        int a[p];
        int arr[p+1];
        for(int j=0; j<p; j++) {
            cin>>arr[j];

        }
        for(int i=0;i<n;i++)
        {
        a[i] =arr[i];


        }
        sort(a,a+n);
        for(int i =0;i<n;i++)
        {
        if(arr[i] != a[i])
        cout<<i+1;
        }


            }

        }










