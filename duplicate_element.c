#include<stdio.h>

int sum(int num1,int num2)
{
int sum = num1+num2;
printf(" sum of num1 and num2 is %d\n",sum);


}
int sub(num1,num2)
{
int sub = num1 - num2;
printf("sub of num1 and num2 is %d\n",sub);




}
int mul(int num1,int num2)
{

int mul = num1*num2;
return mul;

}

int div(int num1,int num2)
{

int div = num1/num2;
return div;


}








int main()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
sum(num1,num2);
sub(num1,num2);
printf("mul of num1 and num2 is %d\n",mul(num1,num2));
printf("div of num1 and num2 is %d\n",div(num1,num2));
return 0;
}
