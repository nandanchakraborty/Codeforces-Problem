#include<stdio.h>
int main()
{
int i = 0;
char ch[1000];
gets(ch);


if(ch[i]>='a' && ch[i]<='z')
{
ch[i]= ch[i]-32;
printf("%s",ch);
}
else printf("%s",ch);







return 0;
}
