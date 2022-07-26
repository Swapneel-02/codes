#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter the value of argument in radians:");
    scanf("%d", &x);
    float sum=1.0,term,i=1.0;
    for (term=x/i;term>0.0001;term=term*x/i)
    {
        sum+=term;
        i++;
    }
    printf("Sum=%f", sum);
    return 0;
}
