#include <stdio.h>
#include <stdlib.h>
void addVector(int *A,int *B,int *C,int n);
void enter(int *A,int n);
void print(int *A,int n);
int main()
{   int n;
    int *A,*B,*C;
    printf("Enter length of vector:");
    scanf("%d",&n);
    int A[n];
    A=(int *)malloc(n*sizeof(int));  // dynamic allocation (allocates value during running)
    B=(int *)malloc(n*sizeof(int));
    C=(int *)malloc(n*sizeof(int));
    printf("Input A=");
    enter(A,n);
    printf("\n");
    printf("Input B=");
    enter(B,n);
    addVector(A,B,C,n);
    printf("\n");
    printf("C=");
    print(C,n);
    return 0;
}
void addVector(int *A,int *B,int *C,int n)
{
    int i;
    for(i=0;i<n;i++) {
        C[i]=A[i]+B[i];
    }
}
void enter(int *A,int n)
{
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",A+i);
    }
}

void print(int *A,int n)
{
    int i;
    for(i=0;i<n;i++) {
        printf("%d ",*(A+i));
    }
    printf("\n");
}

