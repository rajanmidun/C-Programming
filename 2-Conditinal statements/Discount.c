#include<stdio.h>
#include<conio.h>
int main()
{
    float d,a;
    printf("Enter the amount: ");
    scanf("%f",&a);
    if (a>=5000)
    {
        printf("\nYou get 10 percent discount");
        d=a*(10/100.0);
        printf("\nYour discount amount is %.2f",d);

    }
    else if (a<5000 && a>=4000)
    {
        printf("\nYou get 7 percent discount");
        d=a*(7/100.0);
        printf("\nYour discount amount is %.2f",d);
    }
    else if (a<4000 && a>=3000)
    {
        printf("\nYou get 5 percent discount");
        d=a*(5/100.0);
        printf("\nYour discount amount is %.2f",d);
    }
    else if (a<300 && a>=2000)
    {
        printf("\nYou get 3 percent discount");
        d=a*(3/100.0);
        printf("\nYour discount amount is %.2f",d);
    }
    else
    {
        printf("\nYou get discount of 2 percent");
        d=a*(2/100.0);
        printf("\nYour discount amount is %.2f",d);
    }
    getch();
    return 0;
}
