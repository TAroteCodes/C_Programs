#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter string:");
    gets(s1);
    strcpy(s2,s1);
    puts(s1);
    puts(s2);
    return 0;
}
