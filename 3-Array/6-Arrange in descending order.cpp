#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,largest;
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
            if (a[i] < a[j])
            {
               largest = a[i];
               a[i] = a[j];
                a[j] = largest;
            }
        }
    }
	printf("Data in descending order\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
