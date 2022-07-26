#include<stdio.h>
#include<stdlib.h>

int main()
{  int n,*p,**q;
   printf("Enter a number:");
   scanf("%d",&n);
    p=&n;
    q=&p;
    printf("%d\n",p);
    printf("%d",q);



 return 0;
} 