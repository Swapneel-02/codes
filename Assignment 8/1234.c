#include<stdio.h>
#include<string.h>
int main()
{    int n=0,i;
     char str[20];
     printf("Enter string: ");
     gets(str);
     for(i=0; str[i]!='\0'; i++)
    {
         n++;
    }
    printf("size of string is %d",n); 
  return 0;
}