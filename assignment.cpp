#include <iostream>
using namespace std;

int main() {
    int n,num;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int coun = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    for (int i = 1; coun < n; i++) {
        if (sum == num) {
            cout << i << " ";
            coun++;
        }
    }
    return 0;
}
