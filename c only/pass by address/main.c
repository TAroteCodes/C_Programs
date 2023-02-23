#include <stdio.h>
#include <stdlib.h>
//pass by adress
void circle(int,float*,float*);
void circle(int rad,float *ap,float *cp)
{
    *ap=3.14*rad*rad;
    *cp=2*3.14*rad;
}
int main()
{
    int rad;
    float cArea,cCir;
    printf("enter rad:");
    scanf("%d",&rad);
    circle(rad,&cArea,&cCir);
    printf("Area=%.2f   Circumferonce=%.2f",cArea,cCir);
    return 0;
}
