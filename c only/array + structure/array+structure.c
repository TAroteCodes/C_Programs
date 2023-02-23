#include <stdio.h>
#include <stdlib.h>
struct date
{
    int day,mon,year;
};
struct student
{
    int rno;
    char name[20];
    float avg;
    struct date dob;
};

int main()
{

    struct student s[20];
    int i,n;
    printf("enter N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter rno ,name, avg:");
        scanf("%d%s%f",&s[i].rno,s[i].name,&s[i].avg);
    }
    printf("\n\n student details\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d  %s  %.2f\n",s[i].rno,s[i].name,s[i].avg);
    }

    return 0;
}
