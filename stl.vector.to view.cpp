#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)*/
int main() {
//to insert element in a vector use : variable_name.push_back()
    vector<int>v;
    for(int i=1; i<5; i++)
        v.push_back(i);
    cout<<"output of begin and end: ";
    for(auto i=v.begin(); i!=v.end(); i++)
        cout<<*i<<" ";

    cout<<endl<<"output of cbegin and cend:";
    for(auto i = v.cbegin(); i!=v.cend(); i++)
        cout<<*i<<" ";

    cout<<"\noutput of rbegin and rend:";
    for(auto i =v.rbegin(); i!= v.rend(); i++)
        cout<<*i<<" ";
    cout<<endl;
    //capacity;;
    /*Capacity

    size() – Returns the number of elements in the vector.
    max_size() – Returns the maximum number of elements that the vector can hold.
    capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    resize(n) – Resizes the container so that it contains ‘n’ elements.
    empty() – Returns whether the container is empty.
    shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    reserve() – Requests that the vector capacity be at least enough to contain n elements
    */
    cout<<"size ="<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"max_size = "<<v.max_size()<<endl;
    v.resize(4);
    cout<<"size = "<<v.size()<<endl;

    if(v.empty()==false)cout<<"vector is not empty"<<endl;
    else cout<<"vector is empty"<<endl;


    v.shrink_to_fit();
    for(auto it= v.begin(); it!= v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    //elements access;;
    //refference operator[v] or at()

    cout<<"reffernce or at vector operator = "<<v[2]<<" "<<v.at(2)<<endl;

//front and back element access
    cout<<"front element is = "<<v.front()<<endl;
    cout<<"back element is = "<<v.back()<<endl;

//modifiers:
    /*assign() – It assigns new value to the vector elements by replacing old ones
    push_back() – It push the elements into a vector from the back
    pop_back() – It is used to pop or remove elements from a vector from the back.
    insert() – It inserts new elements before the element at the specified position
    erase() – It is used to remove elements from a container from the specified position or range.
    swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    clear() – It is used to remove all the elements of the vector container
    emplace() – It extends the container by inserting new element at position
    emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
    */
    vector <int > ve;

    ve.assign(5,10);
    cout<<"THe vector element are:"<<endl;
    for(auto i=ve.begin(); i!=ve.end(); i++) {

        cout<<*i<<" ";//output :10,10,10,10,10

    }
    cout<<endl;
    ve.push_back(15);
    int n=ve.size();
    cout<<"the last element is :"<<ve[n-1]<<endl;

    ve.pop_back();
    cout<<"after pop back the vector elements are :"<<endl;
    for(auto i =ve.begin(); i!=ve.end(); i++) {

        cout<<*i<<" ";
    }
    cout<<endl;


    ve.insert(ve.begin(),5);

    cout<<"after insert new value the first  element is :"<<ve[0]<<endl;
    ve.erase(ve.begin());
    cout<<"after erase the first element is :"<<ve[0]<<endl;








}
