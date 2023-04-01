#include<bits/stdc++.h>
using namespace std;
int main() {
    int c,n,x,p=0,i=1,q=0;
    cin>>c;
    for(int j = 0; j<c; j++) {
        cin>>n>>x;
        p=2;
        i=2;
        q=0;
        while (i>=2) {
            if(n==1||n==2) {
                 {
                    cout<<1<<endl;
                    break;
                }
            } else {
                q=q+x;
                if((p+q)>=n) {
                    cout<<i<<endl;
                    break;

                }


            }

            i++;

        }

    }

return 0;
}







