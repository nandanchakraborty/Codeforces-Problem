#include<stdio.h>
int main() {
    float da,far, basic,gross;
    printf("input your basic selary");
    scanf("%f",&basic);
    if(basic  <= 10000) {
        da = basic*0.25;
        far = basic * 0.30;
    }

    else if(basic <=20000) {
        da = basic * 0.30;
        far = basic * 0.50;
    }

    else {
        da = basic * 0.50;
        far = basic*0.90;


    }


    gross = basic + da+ far;
    printf("%0.3f",gross);
    return 0;
}
