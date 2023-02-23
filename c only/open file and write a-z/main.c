#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("C:\\Users\\lenovo\\Desktop\\book.txt","w");
    if(fptr==NULL)
    {
        printf("\n Error in Opening the path.\n\n");
        return 0;
    }
        printf("file opened successfully.\n\n\n");
        for(ch='a';ch<='z';ch++)
        fputc(ch,fptr);
        printf("\n\n Data Written Successfully.");
    fclose(fptr);
    return 0;
}
