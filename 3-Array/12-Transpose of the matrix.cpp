#include <stdio.h>
#include<conio.h>

int main()
{
   int a[10][10],c[10][10],m,n;
   int i,j;
   printf("Enter the no of rows and comlums to construct a matrix!!");
   scanf("%d%d",&m,&n);
   printf("Enter the data for matrix\n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("Enter the data in location a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("\nYour matrix is\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   printf("\nAfter Transpose of matrix\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           c[i][j]=a[j][i];
       }
   }
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d\t",c[i][j]);
       }
       printf("\n");
   }
   return 0;
}

