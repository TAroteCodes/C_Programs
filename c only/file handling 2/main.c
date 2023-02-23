#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr=fopen("C:\\Users\\lenovo\\Desktop\\book.txt","w");
    if(fptr==NULL)
    {
        printf("\n Error in Opening the path.\n\n");
        return 0;
    }
        printf("file opened successfully.\n\n\n");
        fputc('T',fptr);
        printf("\n\n Data Written Successfully.");
    fclose(fptr);
    return 0;
}
