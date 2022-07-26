#include<stdio.h>
#include<stdlib.h>
struct employee_details
{
    int id;
    char name[10];
    int salary;
};
int main()
{    int i,n;
     printf("Enter the number of employees:");
     scanf("%d",&n);
     struct employee_details emp[n];
     for ( i = 1; i <= n; i++)
     {
     printf("Enter ID of employee %d:",i);
     scanf("%d",&emp[i].id);
     printf("Enter name of employee %d:",i);
     fflush(stdin);
     scanf("%[^\n]",&emp[i].name);
     printf("Enter salary of employee %d:",i);
     scanf("%d",&emp[i].salary);
     }
     for ( i = 1; i <= n; i++)
     {
      printf("ID of employee %d = %d\n",i,emp[i].id);
      printf("Name of employee %d = %s\n",i,emp[i].name);
      printf("Salary of employee %d = %d\n",i,emp[i].salary);
      printf("\n");
     }
     
   return 0;
}