#include<stdio.h>
int main() {
    int sum = 0,num,r ,temp;

    printf("input your numbers ");
    scanf("%d",&num);

    temp = num;
    while (temp != 0)
    {
    r = temp %10;

    sum = (sum*10)+r;
    temp = temp /10;

    }
    printf("%d",sum);
    return 0;
}
