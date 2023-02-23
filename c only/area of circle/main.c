#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float area,rad,rads;
    printf("enter the area of circle:");
    scanf("%f",&area);
    rads=area/3.14;
    rad=sqrt(rads);
    printf("\nredius of the circle =%.2f",rad);
    _getch();
    return 0;
}
