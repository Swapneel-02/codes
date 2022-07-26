#include<stdio.h>
int main()
{   
    int n,count,i;
    char str[10];
    gets(str);
    for (i=0; i<=9; i++)
    {  
       for(n=0; str[n]!='\0'; n++)
       { 
          if(str[n]==i)
          {
           count++; 
          }
        }
        printf("%d ",count);
    } 
    return 0;
} 
