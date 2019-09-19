#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,dice;
    for(i=0;i<20;i++)
    {
         dice=(rand()%6)+1;
         printf("In %d roll you get %d\n ",i,dice);
    }
    return 0;
}

