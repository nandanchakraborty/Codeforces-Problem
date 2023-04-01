#include<stdio.h>
int main() {
   long long int  n,sum=0;
   int i =1;
    scanf("%lld",&n);
    while (i<=n)
    {
    if(i%2==0) sum = sum+i;
    else sum = sum-i;

    }

    printf("%lld",sum);


    return 0;
}
