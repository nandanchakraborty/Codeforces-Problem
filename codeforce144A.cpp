#include<iostream>
using namespace std;
int main() {
    int n,i=0,res=0,temp;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin >>arr[i];


    for(i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {

            if(arr[i]<arr[j]) {
                res++;
                temp =arr[i];
                arr[i]=arr[j];
                arr[j] = temp;

            }
        }
    }
    for(i =0;i<n;i++)cout <<arr[i]<<" ";
    cout << res<<endl;
    return 0;
}
