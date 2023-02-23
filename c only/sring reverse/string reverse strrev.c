#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s1[20];
    printf("enter string:");
    gets(s1);
    strrev(s1);      //reverse string and modify original string
    puts(s1);

    return 0;
}
