#include<iostream>
using namespace std;

class first
{
    public:
        int a,b;
        first(int x,int y)
        {
            a=x;
            b=y;
        }
        void dis()
        {
            cout<<"this is the addition = "<<a+b;
        }
};

int main()
{
    first f1(3,4);  //2nd way---first f1= first(2,5);        
    f1.dis();       //3rd way---first f1;
    return 0;       //          f1=first(2,5);
}