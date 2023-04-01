#include<stdio.h>
#include<string.h>
int main() {
    int i =0,result = 0;
    char str[105],ch[105];
    gets(str);
    gets(ch);

    for(i = 0; str[i]!='\0'; i++) {
        if(str[i]>= 'A' && str[i]<='Z') {
            str[i] = str[i]+32;
        }
    }
    for(i = 0; ch[i]!='\0'; i++) {
        if(ch[i]>= 'A' && ch[i]<='Z') {
            ch[i] = ch[i]+32;
        }
    }

    result = strcmp(str,ch);
    if(result<0)printf("-1\n");
    else if(result >0)printf("1\n");
    else printf("0\n");



    return 0;
}
