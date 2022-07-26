#include<stdio.h>
#include<string.h>
struct mark
{
    char sub_name[20];
    int score;
};
struct student
{
    int id;
    char name[20];
    char section;
    struct mark sub[5];
    int avg_mark;
};
int main()
{    
    int i,j;
    struct student s[10];
    for ( i = 0; i < 10; i++) 
    {
       scanf("%d %s %c",&s[i].id,&s[i].name,&s[i].section); 
       for(j=0;j<5;j++)
       {
        scanf("%s %d",s[i].sub[j].sub_name,s[i].sub[j].score);
       } 
    }
    for ( i = 0; i < 10; i++)
    {
         s[j].avg_mark=0;
         for (j = 0; j < 5; j++)
         {
            s[i].avg_mark=s[i].sub[j].score/5.0;
         }
    }
    int hi=0;
    float havg=s[0].avg_mark;
    for ( i = 1; i < 10; i++)
    {
        if(s[i].avg_mark>havg)
        { havg=s[i].avg_mark;
           hi=i; }
    }
    printf("%d %s %c",s[hi].id,s[hi].name,s[hi].section);
    printf("Enter the name you want to search:-");
    char name[20];
    scanf("%s",&name);
    for ( i = 0; i < 10; i++) 
    {
         if (strcmp(name,s[i].name)) {
            break; }
    }
    if(i==10)
    { printf("%s is not found",name);  
       return -1; 
     }
     else 
     printf("%d %s %c",s[i].id,s[i].name,s[i].section);
    
  return 0;
}