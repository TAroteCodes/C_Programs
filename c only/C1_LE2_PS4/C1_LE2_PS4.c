//Find whether the number accepted from the user is positive or negative.
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a;
    printf("Enter  No. :");
    scanf("%f",&a);
    (a==0)?printf("\n\nGiven No. is zero.\n\n"):((a>0)?printf("\n\nGiven no. is Positive.\n\n"):printf("\n\nGiven no. is Negative.\n\n"));
    return 0;
}
