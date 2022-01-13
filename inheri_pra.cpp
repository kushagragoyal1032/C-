#include<iostream>
using namespace std;

class base
{
    public:
    int a;
    base()
    {
       
    }
    base(int x)
    {
        a = x;
        cout<<"a is = "<<a;
    }
};

class derived : public base
{
    public:
    int b=0;
    derived()
    {
       
    }
      derived(int y)
    {
        b = y;
        cout<<"b is = "<<b;
    }
};

int main()
{
    derived::base b(10);
    
    return 0;
}
