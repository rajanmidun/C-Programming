//Recursion function
#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter any number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial is %d",f);
    getch();
    return 0;
}
int fact(int s)
{
    if (s==0)
        return 1;
    else
         return(s*fact(s-1));
}
