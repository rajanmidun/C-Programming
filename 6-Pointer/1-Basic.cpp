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
    return 0;
}

