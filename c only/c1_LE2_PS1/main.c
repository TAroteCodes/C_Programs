//Find the area of a circle whose radius is accepted from the user.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rad,area;
    printf("Enter radius of circle: ");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    printf("\nArea of circle is =%.2f\n\n\n",area);
    return 0;
}
