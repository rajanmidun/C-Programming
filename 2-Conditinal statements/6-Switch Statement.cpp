#include <stdio.h>
#include<conio.h>

int main()
{
   float a,b,d,e;
   int c;
   printf("Enter any two numbers??\n");
   scanf("%f%f",&a,&b);
   printf("1:Sum\n2:Subtraction\n3:Multiplication\n4:Division\n");
   scanf("%d",&c);
   switch(c)
   {
     case 1:
        d=a+b;
        printf("The sum is %.3f\n",d);
        break;

     case 2:
        d=a-b;
        printf("The subtraction is %.3f\n",d);
        break;

     case 3:
        d=a*b;
        printf("The Multiplication is %.3f\n",d);
        break;

     case 4:
        e=a/b;
        printf("The division is %.3f\n",e);
        break;

     default:
        printf("Please enter a right choice(1-4)\n");
   }
   return 0;
}

