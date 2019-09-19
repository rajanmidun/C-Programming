#include <stdio.h>
#include<conio.h>

int main()
{
   int a=1,i;
   for(i=0;i<10;i++)
   {
       printf("%d\t",a);
       a++;
       if(a==6)
         break;
    }
   return 0;
}

