#include<stdio.h>

int main() {


    int flag ,i=0,j,count = 0,year ;




     for(i=0; i<l; i++){
        int flag=0;
        for(j=0; j<i; j++){
            if(str[i]==str[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }


     if(count%2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

}
