#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,c=0,d;
    printf("ENter any number");
    scanf("%d",&n);
        a=n;
        d=0;
        while (a!=0)
        {
            b=a%10;
            d=d*10+b;
            a=a/10;
        }

     if(d==n)
    printf("\nThe number of palindrome = %d",d);
    getch();
    return 0;

}
