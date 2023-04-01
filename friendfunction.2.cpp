#include<iostream>
using namespace std;
class GFG {
  private :
    int private_variable ;
  protected :
    int protected_variable;
  public:
    GFG() {
        private_variable =10;
        protected_variable =20;



    }
    friend class f;



};
class f {
  public:
    void display(GFG t) {
        cout<<"the value of private_variable is "<<t.private_variable<<endl;
        cout<<"the value of protected variable is "<<t.protected_variable<<endl;
    }
};
int main() {
    GFG g;

    f fri;
    fri.display(g);


}
