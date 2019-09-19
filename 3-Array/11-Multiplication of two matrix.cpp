#include <stdio.h>
#include<conio.h>

int main()
{
   int a[10][10],b[10][10],c[10][10],m,n,k;
   int i,j;
   printf("Enter the no of rows and comlums to construct a matrix!!");
   scanf("%d%d",&m,&n);
   printf("Enter the data for first matrix\n");
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("Enter the data in location a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("Enter the data for Second matrix\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("Enter the data in location b[%d][%d]",i,j);
           scanf("%d",&b[i][j]);
       }
   }
   printf("\nFirst matrix is\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   printf("\nSecond matrix is\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d\t",b[i][j]);
       }
       printf("\n");
   }
   printf("\nAfter Multiplying these two matrix\n");
    for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
       	c[i][j]=0;
       	for(k=0;k<n;k++)
       	{
       		  c[i][j]=c[i][j]+a[i][k]*b[k][j];
	    }
         
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

