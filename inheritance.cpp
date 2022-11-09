#include<iostream>
using namespace std;
class abc{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    void get(){
        cout<<"Enter value of x,y,z:";
        cin>>x>>y>>z;
        cout<<endl<<x<<" "<<y<<" "<<z<<endl;
    }
};
class xyz:protected abc{
   private: 
   int m;
   protected:
   int n;
   public:
   int p;
   void put(){
    cout<<"Enter value of m,n,p:";
    cin>>m>>n>>p;
    cout<<endl<<m<<" "<<n<<" "<<p<<" "<<" "<<y<<" "<<z;
   }
}; 
int main()
{
    xyz g;
    g.put();
    return 0;
}