#include <stdio.h>
#include <stdlib.h>
void temp(int,int,int,int,int,int*,float*);
void temp(int a,int b,int c,int d,int e,int *sp,float *ap)
{
    *sp=a+b+c+d+e;
    *ap=(a+b+c+d+e)/5;
    return;
}

int main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf("\nenter marks of a,b,c,d&e:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    temp(a,b,c,d,e,&sum,&avg);
    printf("sum of all students mark is=%d\n Avg of all students marks is=%.2f\
           n",sum,avg);
    return 0;
}
