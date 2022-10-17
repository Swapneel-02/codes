#include<iostream>
using namespace std;
class employee{
    int id,sal,da,hra=900,itax;
    char name[10];
    public:
      void accept(){
        cout<<"Enter id,name and salary:";
        cin>>id>>name>>sal;
      }
      void calc(){
        da=(0.45*sal);
        itax=(0.25*sal);
      }
      void display(){
        sal=(sal-da-itax);
          cout<<name<<" "<<id<<" "<<sal;
      }
};
int main()
{
    employee a;
    a.accept();
    a.calc();
    a.display();
    return 0;
}