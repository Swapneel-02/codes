#include<iostream>
using namespace std;
int sum=0,rem;
int rev_function(int n);
int main()
{
    int n,rev_number;
    cout<<"Enter a number:";
    cin>>n;
    rev_number=rev_function(n);
    cout<<"Reverse of the entered number is:"<<rev_number;
    return 0;
}
int rev_function(int n)
{
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        rev_function(n/10);
    }
    else{
        return sum;
    }
}