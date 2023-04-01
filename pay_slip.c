#include<stdio.h>
int main()
{
int sum = 0,n,value;
float result = 0;
printf("how many books will you buy\n");
scanf("%d",&n);
for(int i =1;i<=n;i++)
{
printf("enter book amount");
scanf("%d",&value);


sum = value + sum;
}

printf("%d\n",sum);

result = (sum * 0.8);

printf("after 20 percent discount you have to pay %0.3f",result);
return 0;
}
