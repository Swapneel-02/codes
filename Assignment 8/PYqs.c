#include<stdio.h>
int main()
{
    char ch[10];
    printf("enter:");
    scanf("%[^\n]",&ch);
    printf("%s",ch);
  return 0;
}    