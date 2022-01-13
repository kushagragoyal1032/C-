#include<iostream>
using namespace std;


class base
{                                       
     protected:
        int a;
         public:
        base()
        {
            cout<<"enter the value of a = ";
            cin>>a;
        }
};

class derive : protected base
{
  int c=1,i;
  public:
    void logic()
      {
        for(i=1;i<=a;i++)
        {
          c=c*i;
        }
      }
      void display()
      {
        cout<<"your factorial is = "<<c;
      }
};

int main()
{
    derive obj1;
    
    obj1.logic();
    obj1.display();
    return 0;
}