#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int i,j,r,c;
    printf("enter no of row & coloumb:");
    scanf("%d%d",&r,&c);
    printf("\nenter arrey element:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nenter arrey element:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }

            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];
            }

            printf("\nprint array  ");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                printf("%d  ",a[i][j]);
            }

            printf("\nprint array  ");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                printf("%d  ",b[i][j]);
            }

                printf("\nprint array   ");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                printf("%d  ",sum[i][j]);
            }

    return 0;

}
