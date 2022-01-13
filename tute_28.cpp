#include<iostream>
using namespace std;

class y;
class x
{
    int data;
    public:
        void set(int value)
        {
            data=value;
        }
        friend void add(x,y);
};

class y
{
    int num;
    public:
        void set(int value)
        {
            num=value;
        }
        friend void add(x,y);
};

void add(x o1,y o2)
{
    cout<<"sum is = "<<o1.data+o2.num;

}

int main()
{
    x a1;
    a1.set(12);

    y a2;
    a2.set(42);

    add(a1,a2);
    return 0;
}
