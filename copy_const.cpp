#include<iostream>
using namespace std;

class test
{
    public:
        int a,b;
        test()
        {
            a=30;
            b=10;
        }
        void put()
        {
            cout<<"this is marks = "<<a<<"\t"<<b<<endl;
        }
        test(test &o1)
        {
            a=o1.a;
            b=o1.b;
        }
};

int main()
{
    test obj1;
    obj1.put();

    test obj2(obj1);
    //obj2=obj1;   //another way
    obj2.put();
    return 0;
}