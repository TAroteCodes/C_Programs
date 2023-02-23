#include <stdio.h>
#include <stdlib.h>

float circle(float);   // declaration
float circle(float r)  //defined
{
    float area;
    area=3.14*r*r;

    return area;
}
int main()     //going to execute first and after these user defined goes to exicute
{
    float r,A;
    printf("enter the value of r:");
    scanf("%f",&r);
    A=circle(r);     // call circle function
    printf("area=%.2f",A);
    return 0;
}
