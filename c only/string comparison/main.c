#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int res;
    printf("enter string:");
    gets(s1);
    printf("enter string:");
    gets(s2);
    puts(s1);
    puts(s2);
    res=strcmp(s1,s2);
    if(res==1)
    {
    printf("s1>s2");
    }
    else
        if(res==0)
    {
        printf("s1=s2");
    }
    else
        printf("s2>s1");
    return 0;
}
