#include <stdio.h>
#include <stdlib.h>

int main()
{
     char rajan[15]="my name is rajan midun magar and your name is what?";
     char *ptr=rajan;
     puts(ptr);
     printf("Remove the error occured in this program by using the fputs function!\n");
     fgets(ptr,15,stdin);
     puts(ptr);
    return 0;
}

