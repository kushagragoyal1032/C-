#include<iostream>
using namespace std;

class load
{
    int a,b,c;
    public:
        void get()
        {
            cout<<"enter the value of a = ";
            cin>>a;
            cout<<endl<<"enter the value of b = ";
            cin>>b;
            cout<<endl<<"enter the value of c = ";
            cin>>c;
        }
        friend void operator -(load &s1);
        void put()
        {
            cout<<endl<<"this is the value of a = "<<a<<endl;
            cout<<"this is the value of b = "<<b<<endl;
            cout<<"this is the value of c = "<<c<<endl;
        }
};

void operator -(load &s1)
{
    s1.a=-s1.a;
    s1.b=-s1.b;
    s1.c=-s1.c;
}

int main()
{
    load obj1;
    obj1.get();
    obj1.put();
    -obj1;//also can use----->  operator-(obj1);                      
    obj1.put();
}