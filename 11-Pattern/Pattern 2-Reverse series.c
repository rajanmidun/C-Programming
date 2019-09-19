#include <stdio.h>
#include <conio.h>
int main()
{
    int j,i;
    for (i=5;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
