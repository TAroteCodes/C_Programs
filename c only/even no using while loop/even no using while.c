#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    i=0;
    printf("enter value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i=i+2;
    }
    return 0;
}
