#include<iostream>
using namespace std;

class base
{
    public:
        string a;
        void get_a()
        {
        cout<<"enter a name = ";
        cin>>a;
        }
};

class derived1 : virtual public base
{

public:
    string b;
     void get_b()
        {
        cout<<"enter b name = ";
        cin>>b;
        }
};

class derived2 : virtual public base
{
    public:
        string c;
        void get_c()
        {
        cout<<"enter c name = ";
        cin>>c;
        }
};

class derived3 : public derived1 , public derived2
{
    public:
        string d;
         void get_d()
        {
        cout<<"enter d name = ";
        cin>>d;
        }
        void put()
        {
            cout<<"a = "<<a<<endl;
              cout<<"b = "<<b<<endl;
                cout<<"c = "<<c<<endl;
                  cout<<"d = "<<d<<endl;
        }
};

int main()
{
    derived3 obj;

    obj.get_a();
    obj.get_b();
    obj.get_c();
    obj.get_d();
    obj.put();
    return 0;

}
