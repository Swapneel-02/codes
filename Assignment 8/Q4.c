#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int i,*ptr,max;
    int arr[10];
    printf("Enter an array:");
    ptr = (int*) malloc(10 * sizeof(int));
    for ( i = 0; i < 10; i++)
    {     
     scanf("%d",ptr[i] = i + 1);
    }
      for (i = 0; i < 10; ++i) {
        if(ptr[i+1]>ptr[i])
        max=ptr[i+1];
      }
    printf("%d",max);
    return 0;
}