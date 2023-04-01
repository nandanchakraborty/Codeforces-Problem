#include<stdio.h>
#include<string.h>
int main() {
    int n,i,count = 0;
    char arr[150];

    scanf("%d\n",&n);
    for (i=0; i<n; i++)
    {
      gets(arr);
    if((arr[0] == '-' && arr[1] == '-') || (arr[1] == '-'&&arr[2] == '-')) count = count -1;



   if((arr[0] == '+' && arr[1] == '+') || (arr[1] =='+' && arr[2] == '+'))count = count +1;



    }

    printf("%d",count);
    return 0;
}
