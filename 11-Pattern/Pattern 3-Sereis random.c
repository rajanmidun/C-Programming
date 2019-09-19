#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,n,a=0;
    for (i=1;i<=4;i++)
    {
        for (j=1;j<=i;j++)
        {
            n=a*10+1;
            printf("%d ",n);
            a=a+1;

        }
        printf("\n");
    }
    getch();
    return 0;
}
