#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter the buying value as a:");
    scanf("%d",&a);
    printf("enter the selling price as b:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("you making loss here.");
    }
    else
    {
        if (a<b)
        {
            printf("you making profit here.");
        }
        else
        {
            printf("no profit no loss here.");
        }
    }

    return 0;
}
