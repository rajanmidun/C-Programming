#include <stdio.h>
#include <stdlib.h>
int fun(int,int);
int main()
{
    int n,a,b;
    printf("Enter any  two numbers: ");
    scanf("%d%d",&a,&b);
    n=fun(a,b);
    printf("The sum of %d and %d is %d",a,b,n);
    getch();
    return 0;
}
int fun(int x,int y)
{
    int s;
    s=x+y;
    return (s);
}
