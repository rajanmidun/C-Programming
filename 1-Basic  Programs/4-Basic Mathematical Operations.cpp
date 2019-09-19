#include <stdio.h>
#include<conio.h>

int main()
{
   int x,y,sum,subtract,multiplies,reminder;
   float divides;
   printf("Enter any two numbers\n");
   scanf("%d%d",&x,&y);
   sum=x+y;
   subtract=x-y;
   multiplies=x*y;
   divides=x/y;
   reminder=x%y;
   printf("\nThe sum is %d",sum);
   printf("\nThe Subtraction is %d",subtract);
   printf("\nThe Multiplication is %d",multiplies);
   printf("\nThe divides is %.3f",divides);
   printf("\nThe Reminder is %d",reminder);
   return 0;
}

