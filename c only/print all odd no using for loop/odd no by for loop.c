#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,n;
    printf("enter the n:");
    scanf("%d",&n);
    for(count=1;count<=n;count=count+2)
    {
        printf("%d",count);
    }
    return 0;

}

