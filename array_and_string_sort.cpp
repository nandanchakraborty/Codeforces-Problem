#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5];
    for(int i =0; i<5; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+5);//function :sort(arr,arr+n)assending order;
    cout<<"array in assending order :";

    for(int i =0; i<5; i++) {

        cout<<arr[i]<<" ";


    }
    cout<<endl;
    sort(arr,arr+5,greater<int>());//function :sort(arr,arr+n,greater<int>())decending order;
    cout<<"array in decending order :";
    for(int i =0; i<5; i++) {
        cout<<arr[i]<<" ";

    }

    int n;

    vector<string>v;
    cout<<"enter string size"<<endl;
    cin>>n;
     char s[n];
     for(int i =0;i<n;i++)
     {
     cin>>s;
     v.push_back(s);

     }
     sort(v.begin(),v.end());
for(int i=0;i<n;i++)
{
cout << v.at(i);

}









}
