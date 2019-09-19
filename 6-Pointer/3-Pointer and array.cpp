#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,ram[5]={1,2,3,4,5},sum=0;
     int temp;
    printf("Name\t Value\t Address\n");
     for(i=0;i<5;i++)
     {
            int *ptr= ram[i];
            printf("ram[%d]\t %d\t%p\n",i,ram[i],ptr);
     }
     printf("Another method\n");
      for(i=0;i<5;i++)
     {
            temp= *(ram+i);
            sum=sum+temp;
     }
     printf("The sum of the data is :%d",sum);
    return 0;
}

