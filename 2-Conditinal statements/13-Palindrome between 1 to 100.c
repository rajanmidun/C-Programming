#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,c=0,d;
    printf("\t\t\tA program to display Palindrome numbers from 1 1o 100 \n\n");
    for (n=1;n<=500;n++)
    {
        a=n;
        d=0;
        while (a!=0)
        {
            b=a%10;
            d=d*10+b;
            a=a/10;
        }
        if (d==n)
        {
            printf("%d,",d);
            c=c+1;
        }
    }
    printf("\nThe number of palindrome = %d",c);
    getch();
    return 0;

}
