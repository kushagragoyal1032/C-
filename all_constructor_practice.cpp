#include<iostream>
using namespace  std;

class cons
{
    int a,b;
        public:
            int *c,*d;
            cons()
            {   a=40,b=20;
                cout<<"the sum is = "<<a+b<<endl;
            }
            cons(int x,int y)
            {
                a=x;
                b=y;
                cout<<"this is the sub = "<<a-b<<endl;
            }
            cons(cons &op)
            {
                cout<<"this is the multi = "<<op.a*op.b<<endl;
            }
            cons(int p,int q,int r)
            {
                c = new int;
                d = new int;
                *c=p;
                *d=q;
                cout<<"this is div = "<<*c/ *d<<endl;
            }
};

int main()
{
    cons obj;
    cons obj1(40,20);
    cons obj2(obj1);
    cons obj3(10,5,20);

    return 0;
}