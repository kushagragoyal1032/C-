#include<iostream>
using namespace std;

class base
{
    public:
        virtual void put()
        {
            cout<<"base class is called !! ";
        }
};
class derived : public base
{   private:
        int a,b,n;
    public:
        void put()
        {
            cout<<"derived class called !! "<<endl;
            cout<<"which table u eant to print = "<<endl;
            cin>>a;
            for(b=1;b<=10;b++)
            {
            cout<<a<< "*" <<b<< "=" <<a*b<<endl;
            }
        }
};

int main()
{
    base *p;
    derived obj1;
    p = &obj1;
    (*p).put();
    return 0;
}