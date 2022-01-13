#include<iostream>
using namespace std;

class test1
{
    int a,b;
    public:
        int *c,*d;
        test1()
        {   cout<<"default const called"<<endl;
            a=10;
            b=20;
        }
        test1(int x,int y)
        {   cout<<"parametrized const called"<<endl;
            a=x;
            b=y;
        }
        test1(test1 &o1)
        {   cout<<"copy const called"<<endl;
            a=o1.a;
            b=o1.b;
        }
        test1(int p,int q,int r)
        {
            cout<<"dynamic constructor called"<<endl;
            c = new int;
            d = new int;
            *c=p;
            *d=q;
        }
        void put()
        {
            cout<<"a is = "<<a<<endl;
            cout<<"b is = "<<b<<endl;
        }
};

int main()
{
    test1 obj;
    obj.put();
    test1 obj1(100,200);
    obj1.put();
    test1 obj2(obj);
    obj2.put();
    test1 obj3(400,500,600);
    cout<<obj3.c<<endl;  //address 
    cout<<*(obj3.c)<<endl;   //value
    return 0;
}