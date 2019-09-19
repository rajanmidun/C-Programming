#include <stdio.h>
#include<conio.h>

int main()
{
   int i,a[5];
   for(i=0;i<5;i++)
   {
       printf("Enter the value in location a[%d]",i);
       scanf("%d",&a[i]);
   }
   printf("You entered\n");
   for(i=0;i<5;i++)
   {
       printf("a[%d]=%d\n",i,a[i]);
   }
   return 0;
}

