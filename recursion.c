#include<stdio.h>
int series(int n)
{
if(n == 0)
return 0;
else
    return n+series(n-1);







}







int main()
{

int n;
scanf("%d",&n);
printf("sum of first  %d number is %d",n,series(n));








return 0;
}
