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
    int i,pos;
    FILE *fptr;
//    fopen_s(&fptr,"C:\\Users\\lenovo\\Desktop\\D.dat","ab");
//    if(fptr==NULL)
//    {
//        printf("Error in opening a file.");
//        return 0;
//    }
//    printf("file opened successfully.\n");
//    for(i=1;i<=3;i++)
//    {
//        printf("\n\n\nEnter students Roll no.  Name  Avg Marks:");
//        scanf("%d%s%f",&st.rno,st.name,&st.avg);
//        fwrite(&st,sizeof(st),1,fptr);
//    }
//    fclose(fptr);
    fopen_s(&fptr,"C:\\Users\\lenovo\\Desktop\\D.dat","rb");  //read
    if(fptr==NULL)
    {
        printf("\nError in opening file\n");
        return 0;
    }
    printf("File content is:\n\n\n");
    //random access
    fseek(fptr,sizeof(st)*4,SEEK_SET);        //randomly accessing file from beginning.
    //fseek(fptr,sizeof(st)*(-5),SEEK_END);    // randomly accessing file from ending.
    pos = ftell(fptr);                         //telling pointer position
    printf("\npos=%d\n",pos);
    while(fread(&st,sizeof(st),1,fptr)==1)
    {
        printf("%d  %s  %f\n",st.rno,st.name,st.avg);
    }
    fclose(fptr);
    return 0;
}

