#include <stdio.h>
#include <stdlib.h>
int main()
{
      int i,n,c=0,d=0;
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
              if(data[i]=='a' || data[i]=='b')
                     c++;
              else
              {
                     printf("Please enter the string only containing 'a' and 'b'\n");
                     exit (0);
              }
       }
       if(c>1)
       {
              {
                      if(data[n-2]=='b'  && data[n-1]=='a')
                      d++;
              }
              if(d==1)
             printf("String is  accepted\n");
             else
             printf("String is not accepted\n");

       }
       }
      return 0;
}

