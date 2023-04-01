#include<stdio.h>
int main() {
    long long int n,m,a,count=0,count1=0,b,rem;
    scanf("%lld %lld %lld",&n,&m,&a);

    if(n == a && m ==a) {
        printf("1");
    }
    else if(n<a && m<a)
        printf("1");

    else if(n>a && m<=a) {
        if(n%a == 0) {
            printf("%lld",n/a);

        } else {
            count = ((n/a)+1)*a;
            printf("%lld",count/a);

        }

    } else if(n<=a && m>a) {
        if(m%a == 0) {
            printf("%lld",n/a);

        }
         else {
           rem = ((m/a)+1)*a;
            printf("%lld",rem/a);

        }
    }
    else if(n>a && m>a)
    {
    if(n%a==0)
    count = n/a;

    else{
    rem = ((n/a)+1)*a;
count= rem/a;
}
    if(m%a == 0)
    count1 = m/a;

    else{
 rem= ((m/a)+1)*a;
count1=rem/a;
}

    }
    printf("%lld",count1+count);

    return 0;
}
