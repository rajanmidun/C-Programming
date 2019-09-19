#include <stdio.h>
#include<conio.h>

int main()
{
   int i,a[10],n,largest;
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
   largest=a[0];
   for(i=1;i<n;i++)
   {

      if(largest<a[i])
      {
          a[0]=a[i];
          a[i]=largest;
          largest=a[0];
      }

   }
   printf("The largest no is %d\n",largest);
   return 0;
}

