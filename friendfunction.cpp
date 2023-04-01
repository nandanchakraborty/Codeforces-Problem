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
/*/ as a friend function
#include <iostream>
using namespace std;

class base; // forward definition needed
// another class in which function is declared
class anotherClass {
public:
    void memberFunction(base& obj);
};

// base class for which friend is declared
class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
         }

    // friend function declaration
    friend void anotherClass::memberFunction(base&);
};

// friend function definition
void anotherClass::memberFunction(base& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}*/

