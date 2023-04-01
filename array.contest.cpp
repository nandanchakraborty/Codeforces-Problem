#include<iostream>
using namespace std;
class base {
  private:
    int private_value;
  protected:
    int protected_value;
  public:
    base() {
    private_value = 10;
    protected_value = 20;
    }
    friend void friendfunction(base& obj);
};
void friendfunction(base& obj)
{
cout<<"private_value :"<<obj.private_value<<endl;
cout<<"protected_value :"<<obj.protected_value<<endl;

}
int main()
{
base mybase;
friendfunction(mybase);



}
