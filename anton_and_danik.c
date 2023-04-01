#include<stdio.h>
#include<string.h>
int main()
{
int a = 0,d= 0,i=0,n;
char str[100000];
gets(str);
scanf("%d",&n);
for(i=0;i<n;i++)
{

if(str[i] == 'A') a++;
 else d++;


}
if(a>d)printf("Anton");
else if(d>a)printf("Danik");
else printf("Friendship");


return 0;
}
