#include <stdio.h>
#include<conio.h>

int main()
{
   int a,i;
   printf("Enter the number whose multiplication table you want to design??\n");
   scanf("%d",&a);
   do
   {
       printf("%d * %d = %d\n",a,i+1,a*(i+1));
       i++;
   }
   while(i<10);
   return 0;
}

