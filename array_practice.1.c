#include<stdio.h>
int main() {
    int i;
    char mess[6];
    printf("enter message (less than 80 character) ");
    for (i = 0 ; i<6; i++) {
        mess[i] = getchar();
        if(mess[i]== '\r')break;


    }
    printf("\n");

    for(i =0 ; i<6; i++)printf("%c",mess[i]);

    return 0;
}
