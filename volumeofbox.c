#include<stdio.h>
int main()
{
    int length,breadth,height,volume,n,i;
    printf("Enter the no of boxes:");
    scanf("%d",&n); 
    for(i=0;i<n;i++) {
    scanf("%d %d %d",&length,&breadth,&height);
    if(height<41) {
    volume=length*breadth*height;
    printf("%d\n",volume); }
    }
    

return 0;
}