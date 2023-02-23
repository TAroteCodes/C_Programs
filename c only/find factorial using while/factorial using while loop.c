#include<stdio.h>  //factorial of a number

int main()
{
	int i;
	int n, prod;
	printf("enter a number n:");
	scanf("%d", &n);
	prod = 1;
	i= 1;
	while(i<= n)
	{
		printf("%d ",i);
		prod = prod * i;
		i++;
	}
	printf("\n\nProduct=%d ", prod);
	return 0;
}
