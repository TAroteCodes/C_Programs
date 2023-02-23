#include<stdio.h>

int main()
{
int x=5,y=&x,*p=y+0;
printf("%d",*p);
return 0;
}
