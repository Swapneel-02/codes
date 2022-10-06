#include <stdio.h>
#include <stdlib.h>

void max_of_four(int a, int b, int c, int d)
{
    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("%d",a);
            }
            else {
                printf("%d",d);
            }
        }
    }
    else if (b > c) {
        if (b > d) {
            printf("%d",b);
        }
        else {
               printf("%d",d);
        }
    }
    else if (c > d) {
        printf("%d",c);
    }
    else {
         printf("%d",d);
    }
}

int main()
{
    int a,b,c,d;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d",&d);
    printf("\n");
    max_of_four(a, b, c, d);


    return 0;
}
