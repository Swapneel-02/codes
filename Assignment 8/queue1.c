#include<stdlib.h>
#include<stdio.h>
void push();
void pop();
void display();
int top,size=20,num;
int stack[20];
int  main()
{
    int choice;
    top=-1;
    do{
    printf("1.Push \n 2.Pop \n 3.Display \n 4.Exit\n Enter your choice:");
    scanf("%d",&choice);
         switch(choice)
         {
             case 1: push();
                     break;
             case 2: pop();
                      break;
             case 3: display();
                      break;
             case 4: break;  
             default: printf("Invalid choice.\n");                   
         }
     } while(choice!=4);
    return 0;
}
void push()
{   
    if (top==size-1)
    printf("Stack is full.\n");
    else {
          printf("Enter the number you want to insert:");
           scanf("%d",&num);
           top++;
           stack[top]=num;
         }
}
void pop()
{   
      if(top==-1)
      printf("Stack is empty, no more pop.\n");
      else {
        printf("number popped is %d\n",stack[top]);
        top--; }
}
void display()
{     int i; 
    if(top==-1)
      printf("No more elements.\n");
      else {
        for(i=top;i>=0;i--)
        printf("%d \n",stack[i]);
      }
}