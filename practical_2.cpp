#include<iostream>
using namespace std;

class room
{
    public:
        double l,b,h;
        double cal_area()
        {
            return l*b;
        }
        double cal_vol()
        {
            return l*b*h;
        }
};

int main()
{
    room r1;
    r1.l = 14.2;
    r1.b = 12.4;
    r1.h = 15.3;

    cout<<"area = "<<r1.cal_area()<<endl;
    cout<<"volume = "<<r1.cal_vol();
    return 0;
}