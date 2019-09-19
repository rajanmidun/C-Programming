#include <stdio.h>
#include<conio.h>

int main()
{
   int a;
   printf("Enter a number??");
   scanf("%d",&a);
   if(a<0)
    printf("The number is negative\n");
   else if(a>0)
    printf("The number is Positive\n");
    else
    printf("The number is Zero\n");
   return 0;
}

