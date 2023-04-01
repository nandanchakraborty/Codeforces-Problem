#include<iostream>
#include<string>
using namespace std;
int main()

{
    int n,m;
    cin >> n,m;
    for(int i =1; i<=n; i++)
    {
        if(i%2==0)
        for(int j=1; j<=m; j++)
            {
                if(j == m) cout << "#";
             else cout <<".";

             cout << endl;
           }


        else
        {
            for(int k =1; k<=m; k++)
                cout << "#";

            }

        cout << endl;
    }
    return 0;
}
