#include<stdio.h>
int main() {
    int a[50],i,n;
  int   max = a[0];
        printf("how many numbers");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i = 1; i<n; i++)
    {
        if(max < a[i])
            max = a[i];

    }
    printf("max number is %d",max);
    return 0;
}
