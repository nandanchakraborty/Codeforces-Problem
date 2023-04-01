#include<stdio.h>
int main() {
    char s = "it", a = "that";
    int i = 0, n;
    scanf("%d", &n);

    for (i = 1; i<= n; i++) {
        if (i == n) {
            if (n%2 == 0) {
                printf("I love it ");
            } else {
                printf("I hate it ");
            }
        } else {
            if (i % 2 == 0) {
                printf("I love that ");
            } else {
                printf("I hate that ");
            }
        }
    }

    return 0;
}
