#include<bits/stdc++.h>
#include<vector>
using namespace std;
void out(vector<int> a) {
  int sum=0;
for (auto i=a.begin() ; i!=a.end(); i++)
    {
        sum=sum+*i;
    }
    cout<<sum;
}
int main()
{
    vector<int> a;
    int x;
    for(int i=0; i<5; i++){
     cin>>x;
     a.push_back(x);
    }
    out(a);
    return 0;
}