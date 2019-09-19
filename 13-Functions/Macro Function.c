#include <stdio.h>
#include <stdlib.h>
#define area(l,b) l*b
int main()
{
    int l,b,c;
    printf("Enter length and breadth");

    scanf("%d%d",&l,&b);
    c=area(l,b);
    printf("THe area is = %d",c);
    return 0;
}
