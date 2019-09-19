#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i,n,b=1;
    printf("ENter any number: ");
    scanf("%d",&a);
    for (i=2;i<=a/2;i++)
    {
        n=a%i;
        switch (n)
        {
            case (0):
            b=0;
            break;


        }
    }
    switch (b)
    {
    case (1):
        {
            printf("Prime");
            break;
        }
    default:
        {
            printf("Composite");
        }
    }
    return 0;
}
