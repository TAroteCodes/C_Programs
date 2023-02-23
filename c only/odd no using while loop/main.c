#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    i=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        i=i+2;
    }
    return 0;
}
