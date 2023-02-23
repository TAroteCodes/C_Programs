#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]; // array of 5 elements syntax
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter the element of array:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("%d   ",a[i]);
    }
    return 0;
}
