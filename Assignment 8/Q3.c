#include<stdio.h>
struct distance
{
   float feet;
   float inch;
   float a,b;
};
int main()
{   struct distance dis;
   printf("Enter two values:");
   scanf("%f %f",&dis.a,&dis.b);
    dis.feet=dis.a+dis.b;
    dis.inch=dis.feet*12;
    printf("The sum of values in feet is %f and in inches is %f",dis.feet,dis.inch);
    return 0;
}