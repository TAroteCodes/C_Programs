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
    struct student s1;
    printf("Enter Roll no. Name ,Avg,Dob(dd mm yyyy):");
    scanf("%d%s%f%d%d%d",&s1.rno,s1.name,&s1.avg,&s1.dob.day,&s1.dob.mon,&s1.dob.year);
    printf("%d %s %f %d-%d-%d",s1.rno,s1.name,s1.avg,s1.dob.day,s1.dob.mon,s1.dob.year);

    return 0;
}
