//Function calling a function
#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int fun(int);
int main()
{
    int c,a,b;
    printf("ENter any number: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("%d",c);
    return 0;
    getch();
}
int sum(int x,int y)
{
    int c,s;
    s=x+y;
    c=fun(s);
    return (c);
}
int fun(int w)
{
    int i,su=0;
    for (i=1;i<=w;i++)
    {
        su+=i;
    }
    return (su);
}
