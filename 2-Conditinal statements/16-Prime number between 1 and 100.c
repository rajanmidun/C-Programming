#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,c=1,d=0;
    for (i=1;i<=100;i++)
    {
        for (n=2;n<=i/2;n++)
        {
            if (i%n==0)
            {
                c=0;
                break;
            }

        }

        if (c==1)
        {
            printf("%d ",i);
            d=d+1;
        }
        c=1;
    }
    return 11;
}
