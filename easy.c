#include<stdio.h>
int main() {
    int n,i,j,p=1,res = 0;
    scanf("%d",&n);
    for(i = 1; i<=n; i++) {
        scanf("%d",&j);
        if(j<3) printf("3\n");
        else {
            for(p=1; p<=3; p++) {
                res = j+p;
                if(res%3==0) {
                    printf("%d\n",res);
                    break;

                }
            }


        }

    }

return 0;
}

