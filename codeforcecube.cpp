#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int c = 0,n;
    string s;
    cin >> n;
    for(int i =1; i<=n+1; i++) {
        getline(cin,s);
        if(s == "Tetrahedron") c= c+4;
        else if( s == "Cube") c= c+6;
        else if(s == "Octahedron") c= c+8;
        else if(s == "Dodecahedron" ) c= c+12;
            else if(s== "Icosahedron")c = c+20;


        }


cout << c-20;


return 0;
}
