#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    char str2[10];
    int l1,l2,r;
       // scanf("%[^\n]%*c",&sen);
      // printf("%s",sen); 
     // scanf("%s",&str);
     // printf("%s",str);
     gets(str1);
     puts(str1);
     gets(str2);
     puts(str2);
     l1=strlen(str1);
     l2=strlen(str2);
     printf("%d ",l1);
     printf("%d ",l2);
     r=strcmp(str1,str2);
     printf("%d\n",r);
     strcat(str1,str2);
     puts(str1);
     return 0;
    
}