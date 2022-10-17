#include<iostream>
using namespace std;
class circle{
    int radius,area;
    public:
     void getinput(){
        cout<<"Enter the radius:";
        cin>>radius;
        area=3.14*radius*radius;
     }
     void show(){
        cout<<"Area is="<<area;
     }
};
int main()
{
    circle c;
    c.getinput();
    c.show();
    return 0;
}