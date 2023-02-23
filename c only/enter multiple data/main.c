#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,rno;
    char name[20];
    float avg;
    FILE *fptr;
    fptr=fopen("C:\\Users\\lenovo\\Desktop\\student.txt","a");    //reading
    if(fptr==NULL)
    {
        printf("\n Error in Opening the path.\n\n");
        return 0;
    }
        printf("file opened successfully.\n\n\n");

       for(i=1;i<=3;i++)
       {
           printf("enter rno. name & avg marks:");
           scanf("%d  %s  %f",&rno,name,&avg);
           fprintf(fptr,"%d  %s  %f",rno,name,avg);
           fputc('\n',fptr);
       }

    fclose(fptr);
    return 0;
}
