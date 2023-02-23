#include <stdio.h>
#include <stdlib.h>

void add(int,int);   // declaration
void add(int a,int b)  //defined
{
    int sum;
    sum=a+b;
    printf("sum=%d",sum);
    return;
}
int main()
{
    int a,b;
    printf("enter the value of a & b:");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}
