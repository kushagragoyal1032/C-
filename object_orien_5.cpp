#include<iostream>
using namespace std;

class complex
{
  int a;
  int b;

  public:
  void set(int x,int y)
  {
      a=x;
      b=y;
  }
  void setdatabysum(complex o1,complex o2)
  {
      a=o1.a+o2.a;
      b=o1.b+o2.b;
  }
  void get(void)
  {
      cout<<"complex no a = "<<a<<" and b = "<<b<<endl; 
  }
};

int main()
{
 complex c1,c2,c3;

 c1.set(100,200);
 c1.get();

 c2.set(50,150);
 c2.get();

 c3.setdatabysum(c1,c2);
 c3.get();

 return 0;
 
}
