#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i=0; i<n; i++) {
        for(int j =0; j<=n-i-1; j++) {
            cout<<" ";
        }
        for(int k=0; k<2*i+1; k++) {

            cout<<"*";
        }
        for(int l =0; l<=n-i-1; l++) {
            cout<<" ";
        }
        cout<<endl;

    }


}
void pattern(int n) {
    for(int i = 0; i<n; i++) {//this once for the rows
        for(int j=0; j<i; j++) {//this once for the left side space
            cout<<" ";
        }
        for(int k =0; k<2*n-(2*i+1); k++) {//this once for printing the stars;
            cout<<"*";

        }
        for(int l=0; l<i; l++) {//this once for the right side space;
            cout<<" ";
        }
        cout <<endl;//after printing every line;





    }
    }
    int main() {
        int n;
        cin>>n;
        pattern1(n);
        pattern(n);
    }
