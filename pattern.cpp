#include<bits/stdc++.h>
using namespace std;
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

    int i,j,k,l,n;
    cin>>n;
    pattern(n);
}
