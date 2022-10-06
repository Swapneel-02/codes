#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int main(void)
{
	// your code goes here
	int fact,t,n;

	scanf("%d",&t);
	while(t--) {
	    scanf("%d",&n);
	    fact=factorial(n);
	    printf("%d\n",fact);
	}
	return 0;
}

int factorial(int num)
{
    if(num==0 || num==1)
    return 1;
    else
    return num*factorial(num-1);
}


