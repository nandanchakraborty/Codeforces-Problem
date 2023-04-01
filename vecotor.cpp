#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
/*v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(43);

for(int i = 0;i<v.size();i++)
{
cout << v.at(i) << endl;

}

  cout << "size :" << v.size() <<endl;

v.pop_back();

for(int i = 0;i<v.size();i++)
{
cout << v.at(i) << endl;*/

for(int i =0;i<100;i++){
 v.push_back(i+1);
}
v.pop_back();
for(int i = 0;i<v.size();i++)
{
cout << v.at(i) << endl;
}
}
