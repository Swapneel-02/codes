#include<iostream>
using namespace std;
int sort(int arr[],int n)
{   int temp;
    for ( int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);    }
    for (int i = 1; i<=n; i++)
    {
        for (int j = i+1; j<=n; j++)
        {
            if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp; }
           
        }
        
    }
    printf("The array after sorting is = ");
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
     return 0;
}
int largest(int arr[],int n)
{
    int max;
    max=arr[1];
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int smallest(int arr[],int n)
{
    int low;
    low=arr[1];
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]<low)
        low=arr[i];
    }
    return low;
}
int search(int arr[],int n, int s)
{
    for (int i = 1; i <=n; i++)
    {
        if(i==s)
        return arr[i];
    }
}
int main()
{
    int n,i,s;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for ( i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"Largest element is "<<largest(arr,n)<<"\n";
    cout<<"Smallest element is "<<smallest(arr,n)<<"\n";
    cout<<"Enter the position of element:";
    cin>>s;
    cout<<"Element at "<<s<<" position is "<<search(arr,n,s);
    return 0;
}

