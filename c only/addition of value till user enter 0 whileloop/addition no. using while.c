#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum;
    sum=0;
    printf("enter the value:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+n;
        printf("enter the value:");
        scanf("%d",&n);
    }
    printf("\nSum=%d",sum);
    return 0;
}
