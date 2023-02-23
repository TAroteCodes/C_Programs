#include <stdio.h>
#include <stdlib.h>

void intr(float,float,int);   // declaration
void intr(float p,float r,int n)  //defined
{
    float SI;
    SI=p*r*n;
    printf("SI=%.2f",SI);
    return;
}
int main()     //going to execute first and after these user defined goes to exicute
{
    float p,r;
    int n;
    printf("enter the value of p , r:");
    scanf("%f %f",&p,&r);
    printf("enter value of n:");
    scanf("%d",&n);
    intr(p,r,n);     // call function
    return 0;
}
