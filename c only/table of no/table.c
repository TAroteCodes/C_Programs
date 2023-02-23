#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,m;
    printf("enter the no:");
    scanf("%d",&m);
   for(p=1;p<=10;p++)
   {
       printf("%d * %d= %d\n",m,p,m*p);
   }
}
