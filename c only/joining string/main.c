#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter string:");
    gets(s1);
    printf("enter string:");
    gets(s2);
    strcat(s1,s2);         // joining string
    puts(s1);                //joined string
    puts(s2);              //remains unchanged
    return 0;
}
