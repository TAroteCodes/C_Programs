#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float rad,a,b,area;
    printf("MENU\n");
    printf("circle +");
    printf("\nrectangle -");
    printf("\nEXIT e");
    printf("\nEnter your choise:");
    scanf("%c",&ch);
        switch (ch)
        {
       case '+':printf("enter the radius:");
            scanf("%f",&rad);
            area=3.14*rad*rad;
            printf("area of circle=%f",area);
            break;
            case '-':printf("enter the value of a & b:");
                scanf("%f%f",&a,&b);
                area=a*b;
                printf("area of rectangle=%f",area);
                break;
                case 'e' : printf("invalid input");
        }

    return 0;
}
