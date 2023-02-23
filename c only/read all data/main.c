#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("C:\\Users\\lenovo\\Desktop\\book.txt","r");    //reading
    if(fptr==NULL)
    {
        printf("\n Error in Opening the path.\n\n");
        return 0;
    }
        printf("file opened successfully.\n\n\n");
        printf("file content is:");
        ch=fgetc(fptr);
        while(ch!=EOF)
        {
            putchar(ch);
            ch=fgetc(fptr);
        }
    fclose(fptr);
    return 0;
}
