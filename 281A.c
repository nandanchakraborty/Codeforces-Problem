#include<stdio.h>
int main() {
    int n,i;
    char arr[1000],val;

    scanf("%d",&n);

    for(i= 0; i< n; i++)
    {
        scanf("%c",&val);
        printf("%c",val);
    }

    return 0;
}
