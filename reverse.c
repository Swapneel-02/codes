#include <stdio.h>
#include <stdlib.h>

int main()
{  int i,n,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0) {
    i=n%10;
    rev=rev*10+i;
    n=n/10;
    }
    printf("%d",rev);
    return 0;
}
