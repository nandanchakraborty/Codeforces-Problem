#include<stdio.h>
int main() {
    int i,a[10],a1[10];
    for(i = 1; i<11; i++) a[i - 1] = i;
    for(i = 0; i<10; i++)a1[i] = a[i];
    for(i = 0; i<10; i++)printf("%d ",a1[i]);




    return 0;
}
