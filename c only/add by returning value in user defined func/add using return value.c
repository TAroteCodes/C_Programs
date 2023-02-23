#include <stdio.h>
#include <stdlib.h>

int add(int,int);   // declaration
int add(int a,int b)  //defined
{
    int sum;
    sum=a+b;
    return sum;     //returning value
}
int main()
{
    int a,b, res;
    printf("enter the value of a & b:");
    scanf("%d %d",&a,&b);
    res=add(a,b);
    printf("sum=%d",res);
    return 0;
}
