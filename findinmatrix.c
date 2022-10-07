#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, r, c;
    printf("enter no. of rows and columns\n");
    scanf("%d %d", &r, &c);
    printf("-------------------------------------------------------------\n");
    int a[r][c], max, min, sum = 0, flag = 0, mode;
    float mean;
    printf("enter the elements of the matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    printf("-------------------------------------------------------------\n");
    int(*p)[c];
    p = a;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            *(*(p + i) + j) = a[i][j];
    }

    max = **p;
    min = **p;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (*(*(p + i) + j) > max)
                max = *(*(p + i) + j);

            if (*(*(p + i) + j) < min)
                min = *(*(p + i) + j);

            sum += *(*(p + i) + j);
        }
    }
    printf("the max and min values are %d and %d respectively\n", max, min);
    printf("-------------------------------------------------------------\n");
    mean = (float)sum / (i * j);
    printf("the mean value of the array is:%.2f\n", mean);
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (((p + i) + (j + 1)) == ((p + i) + j))
            {
                flag++;
                mode = *(*(p + i) + (j + 1));
            }

        }
    }
    if (flag == 0)
        printf("all elements are unique\n");
    else
        printf("the mode value of the array is %d\n", mode);
    printf("-------------------------------------------------------------\n");

    return 0;
}
