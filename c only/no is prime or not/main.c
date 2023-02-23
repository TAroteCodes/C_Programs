#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, k;

    printf("Enter number to check prime number or not");
    scanf("%d",&n);
    k=2;
    while( k<=n-1)
    {
        if(n%k==0)
        {
           printf("\n %d is not a prime no.",n);
            break;
        }
        else
            k++;
        if(k==n)
    {
    printf("%d is a prime number.",n);
    }
    }
    return 0;
}
