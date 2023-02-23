#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("initial value of a:");
    scanf("%d",&a);
    printf("\ninitial value of b:");
    scanf("%d",&b);
    c=a;//alwase left hand value change thats why c=a not a=c
    a=b;
    b=c;
    printf("\nafter swapping value of a= %d",a);
    printf("\nafter swapping value od b=%d",b);
    _getch();
    return 0;
}
