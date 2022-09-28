#include<iostream>
using namespace std;
inline int sqaure(int a)
{
    return (a*a);
}
int main()
{
   int n;
   cout<<"Enter a number:";
   cin>>n;
   cout<<"The square of the number "<<n<<" is "<<sqaure(n);
   return 0;
}