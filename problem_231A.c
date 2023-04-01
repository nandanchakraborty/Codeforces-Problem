#include<stdio.h>
int main() {
    int a,b,c,num, count = 0;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
     {
     scanf("%d %d %d",&a,&b,&c);
        if((a == 1 && b == 1 ) || (b == 1 && c == 1) || ( a == 1 && c == 1))
        {
            count += 1;
        }



    }

printf("%d",count);


    return 0;
}
