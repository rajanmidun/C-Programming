//Greatest number among three inputed numbers using function.
#include <stdio.h>
#include <stdlib.h>
int great(int ,int,int );
int main()
{
    int a, b,c,n;
    printf("Enter any three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    n=great(a,b,c);
    printf("The greatest number is %d",n);
    getch();
    return 0;
}
int great(int x,int y, int z)
{
    int g;
    if (x>y&&x>z)
    {
        g=x;

    }
    else if (y>z)
    {
        g=y;

    }
    else
    {
        g=z;
    }
    return (g) ;
}
