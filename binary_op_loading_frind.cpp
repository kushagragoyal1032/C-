#include<iostream>
using namespace std;

class dox
{
    int a,b;
        public:
            dox()
            {
                //default constructor
            }
            dox(int x,int y)
            {
                a=x;
                b=y;
            }
           friend dox operator+(dox &obj1,dox &obj2);
           
            void put()
            {
                cout<<"A = "<<a<<endl;
                cout<<"B = "<<b;
            }
};
dox operator+(dox &obj1,dox &obj2)
{
    dox temp;
    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;
}

int main()
{
    dox op(10,20);
    dox op1(30,40);
    dox op3;
     op3=operator+(op,op1); //------> op3=op+op1;
    op3.put();
    return 0;
}


