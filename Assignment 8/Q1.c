#include<stdio.h>
int print(name)
{   
    int count=0;
    puts("Swapneel");
    count++;
    if(count==5) 
    return print(name);
}

int main()
{    
    char name[10];
    print(name);
    return 0;
}