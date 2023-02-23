#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n;
    printf("Enter a =");
    scanf("%d",&a);
    (a==0)?printf("a is zero"):((a%2==0)?printf("a is Even"):printf("a is odd"));
     getch();
    return 0;
}
