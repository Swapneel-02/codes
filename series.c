#include<stdio.h>
int fact(int n);
int main()
{
    int x,i,sum;
    for ( i = 1; i<=5; i++)
    {
        sum=sum+ fact(i)/i;
    }
    printf("The sum of the series is %d.",sum);
    return 0;
    
}
int fact(int n)
{   
    if(n==0 || n==1)
       return 1;
    else
       return n*fact(n-1);

}