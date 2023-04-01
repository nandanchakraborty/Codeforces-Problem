#include<stdio.h>
int main() {
    int n,even,odd;
    printf("how many numbers");
    scanf("%d",&n);
    for(int i = 1; i<n; i++) {
        if(i %2 == 0)


            printf(" %d\n ", i);



    }

    for(int i =1; i<n; i++) {
        if(i%2 != 0)
            printf("odd numbers %d \n",i);


    }

    return 0;
}
