#include <stdio.h>
#include <conio.h>
int main()
{
    float c,m;
    printf("Enter monthly sales amount: ");
    scanf("%f",&m);
    if (m>=10000)
    {
        c=m*(10.0/100);
        printf("Your commission is %.2f",c);
    }
    else
    {
        c=m*(5.0/100);
        printf("Your commission is %.2f",c);

    }
    getch();
    return 0;
}
