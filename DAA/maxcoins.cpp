#include <iostream>

using namespace std;
int nearest(int arr[],int num,int n) {
    for(int i=0;i<n;i++){
        if(arr[i]<=num){
            continue;
        }
        else{
            return i-1;
        }
    }
    return n-1;
}

int main()
{
   int a[]={1,2,5,10,20,50,100,200,500,2000};
   int n;
   cout<<"Enter Your input:" ;
   cin>>n;
  int count=0;
  while(n!=0){
    int near=nearest(a,n,10);
    int p=n/a[near];
    for(int i=1;i<=p;i++){
        
            count++;
    }

    n=n%a[near];
  }
  cout<<"output value:"<<count;
    return 0;
}