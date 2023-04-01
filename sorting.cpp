#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    /*for(int i = 0;i<5;i++)
    {
    cin >> arr[i];

    }*/
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr;

//sort(arr, 10);




    for(int i=0; i<n; i++) {

        cout <<  arr[i] << ' '  ;
    }

    cout <<endl;

    sort(arr,arr+n,greater<int>());

    for(int i=0; i<n; i++) {

        cout <<  arr[i] << ' '  ;
    }


}
