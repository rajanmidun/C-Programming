#include <stdio.h>
#include<conio.h>

int main()
{
   int a,i;
   printf("Enter the number whose multiplication table you want to design??\n");
   scanf("%d",&a);
   for(i=0;i<10;i++)
   {
       printf("%d * %d = %d\n",a,i+1,a*(i+1));
   }
   return 0;
}

