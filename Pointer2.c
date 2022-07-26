//Pointers
#include<stdio.h>
int main()
{
    int i,a[10],n;
    printf("Enter size of matrix:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=1;i<=n;i++) {
       scanf("%d",&a[i]); }
        for(i=1;i<=n;i++) {
         printf("x[%d]=%d\n",i,&a[i]); }

 return 0;
}