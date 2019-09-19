#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf ("Enter a, b, c of a quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4.0*a*c;
    if (d>0)
    {
        r1=(-b-sqrt(d))/(2*a);
        r1=(-b+sqrt(d))/(2*a);
        printf("The roots of quadratic equation are %.2f and %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("The roots of quadratic equation are %.2f and %.2f",r1,r2);
    }
    else if (d<0)
    {
        r1=-b/(2*a);r2=sqrt(-d)/(2*a);
        printf("Roots are %.2f+%.2f i ",r1,r2);
        printf(" and .%2f-%.2f i",r1,r2);
    }
    else{
         printf("wrong");
    }
    getch();
    return 0;

}

