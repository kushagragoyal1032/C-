#include<iostream>
using namespace std;

class base
{
    protected:
    int a,b;
    public:
        virtual void getdata() = 0;
        void get_a()
        {
            cout<<"enter the 1st km = ";
            cin>>a;    
        }
        void get_b()
        {
            cout<<"enter the 2nd km = ";
            cin>>b;
        }
};

class derived_1 : public base
{
    public:
        void getdata()
        {
            cout<<"your total km = "<<a+b<<endl;
        }
};

class derived_2 : public base
{
    public:
        void getdata()
        {
            cout<<"your half distance = "<<(a+b)/2<<endl;
        }
};

int main()
{
    derived_1 obj1;
    derived_2 obj2;

    obj1.get_a();
    obj1.get_b();

    obj1.getdata();

   obj2.get_a();
   obj2.get_b();

    obj2.getdata();

    return 0;
}