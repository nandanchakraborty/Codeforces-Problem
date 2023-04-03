#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    int ar[a];
    cout<<"enter element in assending order"<<endl;

    for(int i =0; i<a; i++) {
        cin>>ar[i];
    }

    int n = sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+n);
    cout<<"enter the value to search"<<endl;
    int key;
    cin>>key;
    int low =0,high =n-1;
    while(low < high) {
        int mid = (low+high)/2;
        if(ar[mid]==key ) {
            cout<<"index number :"<<mid;
            break;
        } else if(key<ar[mid]) {
            high = mid;
        } else low  = mid+1;

    }


    return 0;

}
