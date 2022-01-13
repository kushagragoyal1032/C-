#include<iostream>
using namespace std;

class first
{
    public:
        int a,b,c;
        first()
        {
            cout<<"enter the value of a and b = ";
            cin>>a>>b;
        }
        void put()
        {
            cout<<"sum is = "<<a+b;
        }
        
};

int main()
{
first f1;
    f1.put();
    return 0;
}