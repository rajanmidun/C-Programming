#include <stdio.h>
#include<conio.h>

int main()
{
   int i,a[10],n,smallest;
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
   smallest=a[0];
   for(i=1;i<n;i++)
   {

      if(smallest>a[i])
      {
          a[0]=a[i];
          a[i]=smallest;
          smallest=a[0];
      }

   }
   printf("The smallest no is %d\n",smallest);
   return 0;
}

