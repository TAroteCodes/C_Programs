//Find the maximum of two numbers and display it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter value of a & b: ");
    scanf("%d %d",&a,&b);      //taking value from user
    printf("\n\n");            //blank space
    if (a>b)
    {
        printf("A is Greater Than B\n\n\n");
    }
    else
    printf("B is Greater Than A!\n\n\n");
    return 0;
}
