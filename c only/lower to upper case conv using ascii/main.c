#include <stdio.h>
#include <stdlib.h>

int main()

{
   char Lch,Uch;
   printf("Enter any Lowercase character =");
   scanf("%c",&Lch);
   Uch=Lch-32;
   printf("Uppercase char=%c",Uch);
   getch();
   return 0;
}
