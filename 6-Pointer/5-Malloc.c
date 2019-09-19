#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,i,*q,n;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    q=p;
    for(i=0;i<n;i++)
    {
        printf("Enter your %d marks: ",i+1);
        scanf("%d",p);

        printf("%d\n",p);
        p=p+1;
    }
    p=q;
    for(i=0;i<n;i++)
    {
        printf("The marks of %d student is %d\n",i+1,*p);

        printf("%d\n",p);
        p=p+1;
    }
    free(p);
    getch();

    return 0;
}
