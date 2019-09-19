#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a=67;
     printf("Name\t Address\t Value\n");
     printf("%s\t %p\t %d\n","Ram",&a,a);
     int *ptr =&a;
     printf("%s\t %p\t %d\n","Ram",ptr,a);
       printf("%s\t %p\t %p\n","Ptr",&ptr,ptr);

       printf("The dereference value :\n");
       printf("*ptr : %d\n",*ptr);
       *ptr =56;
          printf("*ptr : %d\n",*ptr);
    return 0;
}

