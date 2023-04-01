#include<bits/stdc++.h>
using namespace std;
//#_pairs;


void explainpair() {
    pair<int,int>p = {1,3};
    cout<<p.first<< "  "<<p.second;
    pair<int,pair<int,int >p= {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

        //pair _array:
         pair<int ,int>arr[]={{1,2},{2,5},{3,6}};
         cout<<arr[2].second;
}
//vector;
void explain_vector()
{
        vector<int>v;
        v.push_back(1);
        v.emplace_back(2);
//pair_vector
    vector<int ,int>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    //erase from vector
    //{10,20,12,30}
     v.erase(v.begin()+1);

    //insert;
    v.insert(v.begin()+2);
    //copy a vector to another vectror
    v.insert(v.begin(),copy.(begin),copy.end());



    //iterator;;it = {20,10,5,10,6}
vector<int>::iterator it = v.begin() //here 'it' is variable name;
    cout<<v.begin()//that will print the memory location of 20
    it++;
    cout<<*(it);//that will print 10;

    vector<int>::iterator it = v.end();
    //v.end will go to the next memory address after 6 not to 6;
    //to print the last element of vector use v.end
    vector<int>::iterator it = v.rend(); //dont need to use generally
    vector<int>::iterator it = v.rbegin(); //dont need to use generally


    //iterator is very useful in looping;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
    cout<<*(it)<<" ";
    }

    //for shortcut
    for(auto it = v.begin();it!=v.end();it++)   //here auto will automatically consider which data type it is in cpp;

   {
    cout<<*(it);
   }

    //foreach loop;
    for(auto it:v)
    {
     cout<<*(it);
    }

    //{20,10,5,6}

    //erase function;
    //to erase one element;
    v.erase(v.begin()+1)//that will erase 10;the vector will be {20,5,6}

    //{20,10,5,6,3,24}
    //to erase more than  one element
    v.erase(v.begin()+2,v.begin()+4)//start ,end;{20,10,3,24}













}
