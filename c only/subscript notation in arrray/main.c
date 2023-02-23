#include <stdio.h>
#include <stdlib.h>
void display(int(*)[10],int,int);
void display(int (*x)[10],int r,int c)
{
    int i,j;
    printf("\n\nArray is:\n\n");
    for(i=0;i<r;i++) //outer loop
    {
        for(j=0;j<c;j++) //inner loop
            printf("%d ",*(*(x+i)+j));
        printf("\n");
    }
}
void accept(int(*)[10],int,int);
void accept(int (*x)[10],int r,int c)
{
    int i,j;
    printf("\nEnter Array elements:\n");
    for(i=0;i<r;i++) //rows
        for(j=0;j<c;j++) //col
            scanf("%d",*(x+i)+j);
}

int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int i,j;
    int r,c;
    printf("\nEnter rows & col:");
    scanf("%d%d",&r,&c);

    accept(a,r,c);
    accept(b,r,c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            *(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);    //pointer notation

    display(a,r,c);
    display(b,r,c);
    display(sum,r,c);

    return 0;
}
