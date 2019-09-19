#include <stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,n=0,t;
    printf("The fibonacci series are as follows: \n\n");
    while (n<=10)
    {
        printf("%d",a);
        t=a+b;
        a=b;
        b=t;
        if (n<10)
            printf(",");
        n++;
    }
    getch();
    return 0;

}
