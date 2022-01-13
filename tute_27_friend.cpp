#include<iostream>
using namespace std;

//forword declaration
class complex;

class calculator
{
    public:
    int add(int a,int b)
    {
        return (a+b);
    }

    int sumrealcomplex(complex , complex);
};

class complex
{
    int a,b;
    friend int calculator :: sumrealcomplex(complex , complex);
    public:
    void set(int x,int y)
    {
        a=x; 
        b=y;
    }

    void printnum(void)
    {
        cout<<"your no is a = "<<a<<" and b = "<<b<<endl;

 
    }
};

int calculator :: sumrealcomplex(complex o1,complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1,o2;
    o1.set(1,4);
    o2.set(5,7);
    calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout<<"the sum is = "<<res<<endl;
    return 0;
}