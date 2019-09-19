#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char name[56],name1[45];
   printf("Enter your first name?");
   gets(name);
   printf("Enter your last name?");
   gets(name1);
   strcat(name,name1);
   printf("Your name is ");
   puts(name);
   return 0;
}

