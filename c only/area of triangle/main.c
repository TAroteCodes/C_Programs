#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,s,A,area;
    printf("enter the value of triangles sides a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
   A=s*(s-a)*(s-b)*(s-c);
   area=sqrt(A);
   printf("\narea of triangle=%.2f",area);
   _getch();
   return 0;
}
