#include <stdio.h>
#include <stdlib.h>
double sum(int *,int*);
double main()
{
    int a,b,c;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    c=sum(&a,&b);
    printf("%d",c);
    getch();
    return 0;
}
double sum(int*p,int *q)
{
    int s;
    s=*p+*q;
    return s;
}
