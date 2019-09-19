#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char name[56],name1[45];
   printf("Enter your first name?");
   gets(name);
   strcpy(name1,name);
   printf("Your name is ");
   puts(name1);
   return 0;
}

