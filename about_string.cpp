#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    int res =0;
    string s;
    cin >>s;
    int i =0;
    if(s[i]>s[i+1]) {
        res = s[i] - s[i+1];

    } else res = s[i+1]-s[i];



    cout<<res;

    return 0;

}
