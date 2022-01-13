#include<iostream>
using namespace std;

class base
{
    int x,y;
    public:
    base(int a,int b)
    {
        x=a;
        y=b;
    }
};
class derived : public base
{
    public:
        base(10,20);
};

void main()
{
    derived obj;
    return 0;
}