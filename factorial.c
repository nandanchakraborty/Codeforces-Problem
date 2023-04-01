#include<stdio.h>
int main() {
    int num;
    double sum = 1;
    scanf("%d",&num);
    if(num ==1 || num == 0)
     {
        printf("factorial is 1");
    }
    else
    {
    for(int i = num; i>= 1; i--)
    {

        sum = sum*i;
    }


    printf("%lf",sum);
    }
    return 0;
}
