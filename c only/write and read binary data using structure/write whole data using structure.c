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
    struct student st;
    int i;
    FILE *fptr;
    fopen_s(&fptr,"C:\\Users\\lenovo\\Desktop\\c.dat","wb");
    if (fptr==NULL)
    {
        printf("Error in opening a file.");
    }
    printf("file opened successfully.\n");
    for(i=1;i<=3;i++)
    {
        printf("\n\n\nEnter students Roll no.  Name  Avg Marks:");
        scanf("%d %s %f",&st.rno,st.name,&st.avg);
        fwrite(&st,sizeof(st),1,fptr);
    }
    printf("\n data written to file.");
    fclose(fptr);
    return 0;
}
