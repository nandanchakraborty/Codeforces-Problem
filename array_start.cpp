#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
   cin >>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];

    }
    int temp = 0;

    for(int i =0; i<n; i++) {
        if(arr[i]>temp) {
            temp = arr[i];

        }

    }
    cout<<"1st largest  "<<temp<<endl;
    int largest=-1;
    for(int i =0; i<n; i++) {

        if(arr[i]> largest && arr[i]<temp) {
            largest = arr[i];

        }

    }
    cout<<"2nd largest  "<<largest;


}
