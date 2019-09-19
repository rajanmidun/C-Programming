#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
      int i,n,c=0;
      char data[45];
      printf("Enter your binary string?\n");
      gets(data);
      n=strlen(data);
      if(n==1 || n==0)
      {
             printf("Your string is not accepted");
      }
      else{
       for(i=0;i<n;i++)
       {
              if(data[i]=='0' || data[i]=='1')
                     c++;
              else
              {
                     printf("Please enter the binary string\n");
                     exit (0);
              }
       }
       if(c>1)
       {
                  i=0;
              if(data[i]=='1' && data[i+1]=='1')
                     printf("String is accepted\n");
              else
                     printf("String is not accepted\n");
       }
       }
      return 0;
}

