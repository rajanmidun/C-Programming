#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    float a,b,c,s,ar;
    printf("Enter the Three sides of triangle:  ");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("It is a Valid Triangle\n");
        s=(a+b+c)/2;
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of Triangle is %.2f ",ar);
    }
    else{
        printf("It is Not a Valid Triangle");
    }
    getch();
    return 0;
}
