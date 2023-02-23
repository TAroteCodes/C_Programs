#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rno;
    char name[20];
    float avg;
};
//memory of student 4+20+4=28byte
int main()
{
    int a=10;
    struct student s1={100,"ravi",98.8};
    struct student s2={101,"swapnil",60.6};
    printf("Roll no=%d  Name=%s   Avg marks=%f\n\n\n\n",s1.rno,s1.name,s1.avg);
    return 0;
}
