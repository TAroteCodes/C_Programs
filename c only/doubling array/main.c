#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],b[50];
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("\nenter array elements:");
      scanf("%d",&a[i]);
    }
    printf("\nprint a Array");
    for(i=0;i<n;i++)
    {
        printf(" %d  ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i]*2;
    }
    printf("\nPrint b Array:");
    for(i=0;i<n;i++)
    {
        printf("%d  ",b[i]);
    }
    return 0;
}
