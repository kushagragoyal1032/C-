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
        void operator -();
        void put()
        {
            cout<<endl<<"this is the value of a = "<<a<<endl;
            cout<<"this is the value of b = "<<b<<endl;
            cout<<"this is the value of c = "<<c<<endl;
        }
};

void load :: operator -()
{
    a=-a;
    b=-b;
    c=-c;
}

int main()
{
    load obj1;
    obj1.get();
    obj1.put();
    -obj1;                      //we can use also ---->   //obj1- //obj1.operator -();
    obj1.put();
}