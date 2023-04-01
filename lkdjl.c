
#include <stdio.h>
 #include <string.h>

 int main()
 {
    char input[50];
    int i, j, count=0;
    gets(input);
    int n = strlen(input);
     for(i=0; i<n; i++){
        int flag=0;
        for(j=0; j<i; j++){
            if(input[i]==input[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("%d",count);

    return 0;
 }
