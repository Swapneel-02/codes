#include<stdio.h>
int main()
{
  int max,min,n,i;
  printf("Enter size of array:");
  scanf("%d",&n);
  int a[n];
  printf("Enter array:");
  for( i = 0; i < n; i++)
  { scanf("%d",&a[i]);
  }
  max=a[0];
  for ( i = 1; i <n; i++)
  {
    if(a[i]>max){
      max=a[i];
    }
  }
  printf("Max=%d\n",max);
  min=a[0];
  for ( i = 1; i < n; i++)
  {
    if(a[i]<min) {
      min=a[i];
    }
  }
  printf("min=%d",min);
  return 0;
}