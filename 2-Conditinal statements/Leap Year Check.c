#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the Year you want to check: ");
    scanf("%d",&a);
    if (a%100==0 && a%400==0)
    {
        printf("It is a Leap year");
    }
    else if (a%100!=0&&a%4==0)

    {
        printf("it is a leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    getch();
    return 0;
}
