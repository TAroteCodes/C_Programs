#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rno;
    char name[20];
    float avg;
};
int main()
{
    struct student s1;
    struct student s2;
    printf("Roll no.   Name   Avg marks ");
    scanf("%d%s%f",&s1.rno,s1.name,&s1.avg);   //. dot operator
    printf("\n\n\n%d %s %.2f\n\n\n\n",s1.rno,s1.name,s1.avg);
    s2=s1;
    printf("%d %s %.2f\n\n\n\n",s2.rno,s2.name,s2.avg);
    struct student *sp=&s1;           //string pointer
    printf("%d %s %.2f\n\n\n\n",sp->rno,sp->name,sp->avg);
    return 0;
}
