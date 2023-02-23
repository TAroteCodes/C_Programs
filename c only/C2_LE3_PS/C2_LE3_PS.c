//Write a program to print "WELCOME TO SEED" using escape sequences: \n,\t, \r, \”. Observe the differences in the output.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nWELCOME  TO SEED!\n");  //NEW LINE \N
    printf("\tWELCOME  TO SEED!\n");  // ADD SPACE(TAB)\T
    printf("\rWELCOME  TO SEED!\n");
    printf("\"WELCOME  TO SEED!\n");
    printf("WELCOME  \tTO SEED!");
    printf("WELCOME  \rTO SEED!\n");  //ONLY DISPLAYING FROM \R
    return 0;
}
