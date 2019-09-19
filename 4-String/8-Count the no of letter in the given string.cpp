#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[23],i,c=0;
    printf("Enter the text of a line?\n");
    gets(name);
    for(i=0;i<=strlen(name);i++)
    {
        if((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
            c++;
    }
    printf("The no of letters in the given string is: %d" ,c);
    return 0;
}

