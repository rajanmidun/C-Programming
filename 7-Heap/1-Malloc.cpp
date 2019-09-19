#include <stdio.h>
#include <stdlib.h>

int main()
{
      int * ptr;
      int i,total=0,n;
      int *ptrarray;
      printf("Enter how many numbers?\n");
      scanf("%d",&n);
      ptr=(int *) malloc (5 *sizeof(int));
      printf("Enter the numbers\n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&ptrarray[i]);
          total+=ptrarray[i];
      }
      printf("The sum of the data is %d\n",total);
      free(ptr);
      return 0;
}

