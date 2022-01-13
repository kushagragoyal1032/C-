#include<iostream>
using namespace std;

class source
{
    int inch,feet,value;
    public:
        source()
        {
            cout<<"enter the value of inches = ";
            cin>>value;
        };
        int conversion1()
        {
            int feet = value/12;
            return feet;
        }
        int conversion2()
        {
            int inch = value%12;
            return inch;
        }
};

class destination
{
    int a,b;
    public:
        destination()
        {
            a=0,b=0;
        }
        void operator=(source op)
        {
            a = op.conversion1();
            b = op.conversion2();
        }
        void put()
        {
            cout<<endl<<"\t\t*_*_*_NOW THE FINAL ANS IS = *_*_*_*"<<endl<<endl;
        }
        void display()
        {
            cout<<"the value in feet = "<<a<<endl;
            cout<<"the value in inches = "<<b<<endl;
        }
};

int main()
{
    source obj1;
    destination obj2;
    obj2.display();
    obj2 = obj1;
    obj2.put();
    obj2.display();
    return 0;
}