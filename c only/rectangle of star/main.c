#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q;
    int m,n;
    printf("enter the no of lines:");
    scanf("%d",&m);
    printf("enter the no of star in a row");
    scanf("%d",&n);
    for(p=1;p<=m;p++)
    {
        for(q=1;q<=n;q++)
        {
            printf("*");
        }
        printf("\n");
    }
}
