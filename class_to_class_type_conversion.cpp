#include<iostream>
using namespace std;

class km
{
    int kilometer,meter;
    public:
        km(int a,int b)
        {
            kilometer=a;
            meter=b;
        }
        void disp()
        {
            cout<<"this is km = "<<kilometer<<endl;
            cout<<"this is meter ="<<meter<<endl;
        }
        int coversion()
        {
            int totalmeter=kilometer*1000+meter;
            return totalmeter;
        }
};

class meter_class
{
    int m;
    public:
        meter_class()
        {
            m=0;
        }
        void display()
        {
            cout<<"total meters = "<<m<<endl;
        }
        void operator=(km op)
        {
            m = op.coversion();
        }
};

int main()
{
    km obj1(4,500);
    obj1.disp();
    meter_class obj2;
    obj2.display();
    obj2=obj1;
    obj1.disp();
    obj2.display();
    return 0;
}