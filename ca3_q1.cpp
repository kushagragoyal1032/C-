#include<iostream>
using namespace std;

class base
{
    public:
        int value;
        void get()
        {
        cout<<"enter the value of a = ";
        cin>>value;
        }
};
class derieved1 : public base
{
    public:
    int meter;

    void meter_logic()
    {
    meter = value*1000;
    }
    void disp_m()
    {
        cout<<"your value convert into meter = "<<meter<<" meters"<<endl<<endl;
    }
};

class derieved2 : public base
{
    public:
        int centimeter;
        void centimeter_logic()
        {
            centimeter = value*100000;
        }
        void disp_cm()
        {
            cout<<"your value convert into centimeter = "<<centimeter<<" cm";
        }
};
int main()
{
derieved1 obj;
obj.get();
obj.meter_logic();
obj.disp_m();

derieved2 obj1;
obj1.get();
obj1.centimeter_logic();
obj1.disp_cm();
return 0;
}