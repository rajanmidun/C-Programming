#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char name[56];
   printf("Enter your name?");
   gets(name);
   printf("Your name is ");
   puts(name);
   int length=strlen(name);
   printf("The length is %d",length);
   return 0;
}
