//2.problem_name___fibonucci_number

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0, b = 1, c;
    cout << a << " " << b << " ";

    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
   cout <<0;
}
