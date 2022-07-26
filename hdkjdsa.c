#include<stdio.h>
int main()
{  
   int i,j,n,a[10],b[10],mul[10][10];
   printf("Enter size of array:");
   scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
     for(j=0;j<n;j++)
       scanf("%d",&b[j]);
       for(i=0;i<n;i++) 
       {
          for(j=0;j<n;j++) 
          {
               mul[i][j]=a[i]*b[j]; }
       } 
           for(i=0;i<n;i++) 
           {
              for(j=0;j<n;j++) 
              {
                printf("%d ",mul[i][j]);
              }
           } 
return 0;
}