#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p[100];
    int a[100],m[100],s[100],e[100],c[100],i,n;
    printf("Enter the total number of students ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\nFor NO.%d student",i+1);
        printf("\nEnter Marks in Maths ");
        scanf("%d",&m[i]);
        printf("\nEnter Marks in Computer  ");
        scanf("%d",&c[i]);
        printf("\nEnter Marks in English  ");
        scanf("%d",&e[i]);
        printf("\nEnter Marks in Science ");
        scanf("%d",&s[i]);
        printf("\nEnter Marks in Algebra");
        scanf("%d",&a[i]);
        p[i]=(a[i]+e[i]+c[i]+m[i]+s[i])/500.0*100.0;
    }
    for (i=0;i<n;i++)
    {
        printf("\nThe percentage of No.%d student =%f",i+1,p[i]);
    }
    getch();
    return 0;

}
