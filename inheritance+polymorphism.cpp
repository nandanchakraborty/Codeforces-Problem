#include<bits/stdc++.h>
using namespace std;
class Brand{
public:
string brand ="ford";
void honk()
{
cout<<"hello guys this is ford brand"<<endl;
}



};
class Car:public Brand{
public:
string  model = "mushrand";


};
int main()
{
Car mycar;
mycar.honk();
cout<<mycar.brand<<" "<<mycar.model;
return 0;



}
