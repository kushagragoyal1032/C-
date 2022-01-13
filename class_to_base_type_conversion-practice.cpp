#include<iostream>
using namespace std;

class class_to_base
{   public:
    int gram;
    int kg;
    int total_gram;
    void get()
    {
        cout<<"enter the value of gram = ";
        cin>>gram;
    }
    class_to_base()
    {   kg = 0;
        total_gram =0;
    }
    operator int()
    {
        cout<<"the final ans = "<<endl;
        kg = gram/1000;
       total_gram = gram%1000;
    }
    void put()
    { 
        cout<<"kg is = "<<kg<<endl<<"gram is = "<<total_gram<<endl;
    }
};

int main()
{
  class_to_base obj1;
  obj1.get();
  obj1.put();
  int x;
  x= obj1;
  //cout<<x;
  obj1.put();
  return 0;

}