#include<stdio.h>
int square(int x);
int main()
{
    int n,sq;
    printf("Enter a number:");
    scanf("%d",&n);
    sq=square(n);
    printf("The square of the number is %d",sq);
    return 0;
}
int square(int x)
{
    int sq;
    sq=x*x;
}