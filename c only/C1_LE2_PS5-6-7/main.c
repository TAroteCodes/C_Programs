//Accept; the age from the user and display appropriate message for issuing of license: Less than 18 years – Display “No license”.
//                                                                                     Above 18 years – Display “Issue license”.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter Your Age:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("\n\nYou Are Eligible For Issuing License.\n\n");
    }
    else
        printf("\n\nYou Are Not Eligible For Issuing Licence.\n\n");
    return 0;
}
