#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("The numbers after swapping are %d & %d",x,y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

