#include<stdio.h>

int main() {
    int a[30]={0}, cnt=0;
    char s[105];
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++) {
        if(a[s[i]-97]==0) cnt++;
        a[s[i]-97]++;
    }
    if(cnt%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}
