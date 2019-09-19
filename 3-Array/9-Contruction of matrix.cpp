#include <stdio.h>
#include<conio.h>

int main()
{
   int a[10][10],m,n;
   int i,j;
   printf("Enter the no of rows and comlums to construct a matrix!!");
   scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("Enter the data in location a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("Your matrix is\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   return 0;
}

