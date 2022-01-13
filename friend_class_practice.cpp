#include<iostream>
using namespace std;

class basic
{
    int a,b;
    friend class basic1;
    public:
        void get()
        {
            cout<<"enter the value of a and b = ";
            cin>>a>>b;
        }
};

class basic1
{
    public:
        void logic(basic op,basic op1)
        {
            int c = op.a+op1.a;
            int d = op.b+op1.b;
            cout<<"this is value of sum of c = "<<c<<endl;
            cout<<"this is d = "<<d;
        }
};

int main()
{
    basic obj,obj1;
    obj.get();
    obj1.get();
    basic1 obj2;
    obj2.logic(obj,obj1);
    return 0;
}

