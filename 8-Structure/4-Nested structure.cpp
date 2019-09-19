#include <stdio.h>
#include <stdlib.h>
 struct rajan
      {
           int id;
           struct midun
           {
            float salary;
           char name[45];
		   }magar1[6];
      };
int main()
{
    int i,n;
    struct rajan *ptr;
    printf("Enter the no of student\n");
    scanf("%d",&n);
    ptr=(struct rajan *)malloc(n * sizeof(struct rajan));  
    struct rajan magar[n];
     for(i=0;i<n;i++)
     {
            printf("Enter the name of the employee?\n");
            scanf("%s",&magar[i].magar1[i].name);
            printf("Enter id of employee?\n");
            scanf("%d",&magar[i].id);
            printf("Enter salary of employee?\n");
            scanf("%f",&magar[i].magar1[i].salary);
     }
     printf("Your data is\n");
     printf("\nID\tName\tSalary\n");
     for(i=0;i<n;i++)
     {
            printf("%d\t%s\t%f\n",magar[i].id,magar[i].magar1[i].name,magar[i].magar1[i].salary);
     }
     free(ptr);
      return 0;
}

