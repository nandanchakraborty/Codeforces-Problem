#include<stdio.h>
#include<string.h>
int main() {
    int flag,i,j,p=0,count = 0;
    char s[1005];
    gets(s);

for(i=0; i<strlen(s); i++) {

        if(s[i]=='{}' || s[i]==',' || s[i]==' ')
            {
                continue;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    count++;
                }
            }
            }

    printf("%d\n",count-2);

    return 0;

}
