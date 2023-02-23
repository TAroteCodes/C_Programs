#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    printf("enter the marks:");
    scanf("%f",&m);
    if (m<0 || m>100)
        printf("marks are invalid");
    else
    if(m>=90 && m<=100)
        printf("grade is A");
    else
        if (m>=80 && m<=89)
            printf("grade is B");
        else
            if (m>=60 && m<=79)
                printf("grade is C");
            else
                if (m>=40 && m<=59)
                    printf("grade is D");
                else
                    printf("you are fail");
    return 0;
}
