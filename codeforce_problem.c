#include<stdio.h>
int main() {
    char str[105];
    int i=0,j,min;
    gets(str);

    min = str[i];

    for(i=0; i<105; i++) {
        if(i == 0 || i%2==0) {

            for(j= 2; str[j]!='\0'; j+2) {
                if(str[i]>= str[j])
                    min = str[j];

                }
            printf("%d",str[j]);

        }
        else printf("+");

}
        return 0;
    }
