#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c,d,e,p;
    printf("Enter marks in English, Math, Computer, Science, Nepali: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/500*100;
    if (a>=45 && b>=45 &&c>=45 &&d>=45 &&e>=45 )

    {
        printf("Pass");
        if (p>=80)
        {
            printf("You have passed with distinction");
        }
        else if (p<80 && p>=60)
        {
            printf("You have passed with First Division");
        }
        else
        {
            printf("You have passed with Second Division");
        }
    }
    else
    {
        printf ("Fail");
    }
    printf ("Your Percentage=%.2f",p);
    getch();
    return 0;

}
