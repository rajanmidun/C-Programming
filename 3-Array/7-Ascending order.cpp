#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,smallest;
	printf("Enter how many numbers!");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value in a[%d]",i);
		scanf("%d",&a[i]);
	}
	 for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
               smallest = a[i];
               a[i] = a[j];
                a[j] = smallest;
            }
        }
    }
	printf("Data in Ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
