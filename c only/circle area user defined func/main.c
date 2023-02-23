#include <stdio.h>
#include <stdlib.h>

void circle(float);   // declaration
void circle(float r)  //defined
{
    float area;
    area=3.14*r*r;
    printf("area=%.2f",area);
    return;
}
int main()
{
    float r;
    printf("enter the value of r:");
    scanf("%f",&r);
    circle(r);
    return 0;
}
