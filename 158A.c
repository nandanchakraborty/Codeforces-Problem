#include<stdio.h>
int main() {
    int player,min_score, score,count = 0;

    scanf("%d %d ",&player,&min_score);
    for( int i = 1;i <= player;i++)
    {

        scanf("%d",&score);
        if(score > min_score)
        {

            count += 1;

        }

    }
    printf("%d",count);
    return 0;
}
