//Find whether a given number is odd or even and accordingly display the message “Odd” or “Even”
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter  No. :");
    scanf("%d",&a);
    (a==0)?printf("\n\nGiven No. is zero\n\n"):((a%2==0)?printf("\n\nGiven no. is Even\n\n"):printf("\n\nGiven no. is odd\n\n"));
    return 0;
}
