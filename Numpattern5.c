#include <stdio.h>

int main() {
    int limit,i,j;

    printf("Enter The Limit:");
    scanf("%d",&limit);

    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}