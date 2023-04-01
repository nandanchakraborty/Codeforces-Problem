//4.function

#include <iostream>
using namespace std;

float product(float a, int b) {
    return a * b;
}

int main() {
    float x;
    int y;
    cin >> x >> y;
    cout << product(x, y) << endl;
    return 0;
}

