#include<bits/stdc++.h>
using namespace std;
int LCS(string x,string y)
{
    int m,n;
   m=x.size();
   n=y.size();
   string s;
   int C[m+1][n+1];
   for(int i=0;i<=m;i++)
   {
    C[i][0]=0;
   }
   for (int j = 1; j <=n; j++)
   {
    C[0][j]=0;
   }
   for (int i = 1; i <=m; i++)
   {
     for (int j = 1; j <=n; j++)
     {
        if(x[i-1]==y[j-1])
        {
            C[i][j]=C[i-1][j-1]+1;
        }
        else if(C[i][j-1]>=C[i-1][j])
        {
            C[i][j]=C[i][j-1];
        }
        else {
            C[i][j]=C[i-1][j];
        }
     }
   }
     int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            s += x[i - 1];
            i--;
            j--;
        }
        else
        {
            if (C[i][j - 1] > C[i - 1][j])
                j--;
            else
                i--;
        }
    }
    reverse(s.begin(), s.end());
    cout << s;
    return C[m][n];
   }
int main()
{
    string x="ABCBDAB";
    string y="BDCABA"; 
    LCS(x,y);
    return 0;
}
