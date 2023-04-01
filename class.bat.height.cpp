#include <iostream>
using namespace std;

class BAT {
private:
    float height;

public:
    void set_height(float h) {


        height = h;
    }

    float get_height() {

        return height;
    }
};

float width(BAT bat) {
    return bat.get_height() * bat.get_height();
}

int main() {
    BAT my_bat;
    my_bat.set_height(1.5);
    cout << "Width of bat is: " << width(my_bat) << endl;

    return 0;
}

