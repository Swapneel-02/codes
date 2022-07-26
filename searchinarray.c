#include<stdio.h>
int main()
{
    int n,i,x,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the number you want to search:");
    scanf("%d",&x);
    int a[n];
    printf("Enter the array:");
    for ( i = 0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }
    for ( i = 0; i<n; i++)
    {
        if(a[i]==x)
        count++;
    }
    printf("The number %d occured %d times",x,count);
    return 0;
}