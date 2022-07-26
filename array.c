#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a[10],b[10],sum[10]; 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter two arrays:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
     for(i=0;i<n;i++)
      scanf("%d",&b[i]);  
      for(i=0;i<n;i++)
        sum[i]=a[i]+b[i];
       for(i=0;i<n;i++)
         printf("%d  ",sum[i]);
    return 0; 
}
