//codeforce_problem_71A
//problem_name_Way_to_long_word
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],ch,ac;
    int len = 0,n,i,j= 0;
    scanf("%d",&n);
    for(i = 0;i<=n;i++)
    {
    gets(a);
    len = strlen(a);
    if(len<=10)printf("%s\n",a);
    else
    {


      printf("%c%d%c\n",a[0],len-2,a[len-1]);

    }

    }

    return 0;
}
