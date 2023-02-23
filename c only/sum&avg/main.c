#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5,sum;
    float avg;
    printf("enter marks of m1,m2,m3,m4 & m5:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    avg=sum/5.0;
    printf("sum of marks is =%d",sum);
    printf("\nAvarage of the marks is=%.2f",avg);
    _getch();
    return 0;
}
