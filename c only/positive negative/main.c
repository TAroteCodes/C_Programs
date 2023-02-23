#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    (a>0)?printf("n is positive"):((a<0)?printf("a is negative"):printf("a=0"));
    return 0;
}
