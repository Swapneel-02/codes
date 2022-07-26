#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fact(int a);
int main()
{
    int x,i;
    float sum=1.0f;
    printf("Enter the value of argument in radians:");
    scanf("%d",&x);
    for (i=1; i<=10; i++)
    {
       sum = sum + pow(x,i)/fact(i);
    }
    printf("Sum=%f",sum);
    return 0;
}
int fact(int a)
{  
   if (a==0 || a==1)
   return 1;
   else
   return a*fact(a-1);
}