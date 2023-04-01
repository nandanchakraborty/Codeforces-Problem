#include<stdio.h>
int main() {
    int n,i, j;
    printf("how many numbers");
    scanf("%d",&n);
    int arr[n], result[n];
    for(i = 0; i<n; i++) {
        scanf("%d",&arr[i]);

    }
    for ( i = 0, j = 0; i< n; i++){
        if (arr[i] % 2 == 0){
         result[j] = arr[i];
         j ++;
        }

    }

    for (j = 0; j< n; j++){
        printf("%d ", result[j]);

    }
    return 0;
}
