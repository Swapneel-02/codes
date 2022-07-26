#include<stdio.h>
int main()
{
    int a,b,sum,i;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=a;
    for(i=0;i<b;i++)
    sum++;
    printf("%d",sum);
    return 0;
}