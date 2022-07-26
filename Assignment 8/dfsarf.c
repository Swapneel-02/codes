#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int fact(int a)
{
   return a*fact(a-1);
}


int main()
{
   //to find e^x
   float sum=1;
   float x,y;
   printf("ënter the radian valuee\n");
   scanf("%f",&x);
    //for( int i=0; i<=n-1; i++)
    int n=1;
    while(n>=1)
    {
        y=pow(x,n)/fact(n);
        if(y<0.00001)
           break;
        sum+=y;

    }

    printf("sum=%f",&sum);

    return 0;

}
