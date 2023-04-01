#include<stdio.h>
int main()
{
int n,count =0;
char  arr[5];
scanf("%d",&n);

for(int i =0;i<n;i++)
{
scanf("%c",&arr);
count = arr[i] +arr[i+2];
count = count -48;
printf("%d",count);

}








return 0;
}
