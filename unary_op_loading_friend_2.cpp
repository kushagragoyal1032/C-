#include<iostream>
using namespace std;

class taxi
{
    int a;
    public:
        taxi()
        {
            cout<<"enter the value  = ";
            cin>>a;
        }
        void put()
        {
            cout<<"this the value of A = "<<a;
        }
        friend void operator++(taxi &op);
};

void operator++(taxi &op)
{
    op.a=++op.a;
}

int main()
{
    taxi obj;
   ++obj;// operator++(obj);
    obj.put();
    return 0;

}