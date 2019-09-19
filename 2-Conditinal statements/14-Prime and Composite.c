#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],s=0,i,b,c=1,j;
    for (i=0;i<=4;i++)
    {
        printf("Enter %d Number:",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<=4;i++)
    {
        b=a[i];
        c=1;
        for (j=2;j<=b/2;j++)
        {
            if (b%j==0)
            {
                c=0;
                break;
            }
        }
        if (b!=1)
        {

            if (c==0)
            {
                printf("\ncomposite");
            }
            else
            {
                printf("\nPrime");
            }
        }
        else
        {
            printf("\nNeither prime nor composite");
        }
    }

    getch();
    return 0;

}
