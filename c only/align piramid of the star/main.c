#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,m,n;
    printf("enter the no of lines:");
    scanf("%d",&m);
    for(p=1;p<=m;p++) //lines
    {
        for(n=1;n<=m-p;n++)  //print space
            printf(" ");
        for(q=1;q<=2*p-1;q++) //stars
        {
            printf("*");
        }
        printf("\n");  //for new row every time
    }
}
