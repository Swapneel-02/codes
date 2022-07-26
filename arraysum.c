#include<stdio.h>
int main()
{
    int a[10],sum=0,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for ( i = 0; i < n; i++){
      scanf("%d",a+i); 
      sum+=*(a+i); }
      printf("%d",sum);

return 0;

}