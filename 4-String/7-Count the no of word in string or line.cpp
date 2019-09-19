#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[23],i,c=0;
    printf("Enter the line?\n");
    gets(name);
    for(i=0;i<=strlen(name);i++)
    {
        if(name[i]==' ' || name[i]=='\0')
            c++;
    }
    printf("The no of word in the given string is: %d" ,c);
    return 0;
}
