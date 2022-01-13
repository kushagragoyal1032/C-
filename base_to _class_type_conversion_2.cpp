#include<iostream>
using namespace std;

class basic
{
    int a;
        public:
            basic()
            {}
            basic(int x)
            {
                a=x;
            }
            void put()
            {
                cout<<"this is the value of a = "<<a;
            }
};

int main()
{
    basic obj1;
    int m=10;
    obj1=m;
    obj1.put();
    return 0;
}