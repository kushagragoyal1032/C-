#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"this is point = ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    point p(4,6);
    p.print();

    point q(4,8);
    q.print();
    return 0;
}