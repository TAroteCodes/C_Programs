#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,m;
    printf("enter the no of lines:");
    scanf("%d",&m);
    for(p=1;p<=m;p++) //lines
    {
        for(q=1;q<=p;q++) //stars
        {
            printf("*");
        }
        printf("\n");  //for new row every time
    }
}
