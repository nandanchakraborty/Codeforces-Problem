#include<iostream>
using namespace std;
class User {
  public:
    // class variable
    string c_name;
    string c_email;
    int c_age;

    // contructor
    User(string name, string email, int age) {
        c_name = name;
        c_email = email;
        c_age = age;

    }

  public:
    void set_c_name(string s) {
        c_name = s;

    }

    string get_c_name() {
        return c_name;
    }

    // method to return name
  public:
    string get_name() {
        return c_name;
    }

    // method to return email
  public:
    string get_email() {
        return c_email;
    }


    // method to return age
  private:
    int get_age() {
        return c_age;
    }

  public:
    int get_age_divided_by_two() {
        int real_age = get_age();
        return real_age / 2;

    }

};


int main() {
    User user_obj("nandan", "nandan@gmail.com", 23);
    cout << "Name is " << user_obj.get_c_name()<< endl;
    cout << "Email is " << user_obj.get_email()<< endl;
    cout << "Age is " << user_obj.get_age_divided_by_two()<< endl;



    return 0;
}







