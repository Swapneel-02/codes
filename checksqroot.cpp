#include<iostream>
#include<math.h>
using namespace std;
float root(int a)
{
    float x;
    x=sqrt(a);
    return x;
}
int main()
{
    int n,sr;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The sqaure root of "<<n<<" is "<<root(n)<<"\n";
    sr=sqrt(n);
    if(root(n)==sr){
        cout<<"It is a perfect square";
    }
    else 
    cout<<"It is not a perfect square, after flooring the value is:"<<sr;
    return 0;
}