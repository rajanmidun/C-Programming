#include <stdio.h>
#include<conio.h>

int main()
{
   int a[4][2]={2,3,4,5,6,7,8,9};
   int i,j;
   printf("Your data is\n");
   for(i=0;i<4;i++)
   {
       for(j=0;j<2;j++)
       {
           printf("a[%d][%d]=%d\n",i,j,a[i][j]);
       }
       printf("\n");
   }
   return 0;
}

