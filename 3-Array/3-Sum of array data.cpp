#include <stdio.h>
#include<conio.h>

int main()
{
   int i,a[10],n,total;
   printf("Enter how many numbers?\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the value in location a[%d]",i);
       scanf("%d",&a[i]);
   }
   printf("You entered\n");
   for(i=0;i<n;i++)
   {
       printf("a[%d]=%d\n",i,a[i]);
   }
   for(i=0;i<n;i++)
   {
       total=total+a[i];
   }
   printf("The sum is %d\n",total);
   return 0;
}

