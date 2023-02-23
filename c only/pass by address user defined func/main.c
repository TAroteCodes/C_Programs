#include <stdio.h>
#include <stdlib.h>
void calci(int,int,int*,int*,int*,int*);
void calci(int a,int b,int *sp,int *dp, int *mp,int *qp)
{
    *sp=a+b;
    *dp=a-b;
    *mp=a*b;
    *qp=a/b;
    return;
}

int main()
{
    int a,b,sum,diff,mul,quot;
    printf("enter value of a&b:");
    scanf("%d%d",&a,&b);
    calci(a,b,&sum,&diff,&mul,&quot);
    printf("sum=%d\n diff=%d\n mul=%d\n div=%d",sum,diff,mul,quot);
    return 0;
}
