#include<iostream>
using namespace std;

class binary
{
    int a,b;
    public:
        binary()
        {
            
        }
        binary(int x,int y)
        {
            a=x;
            b=y;
        }
        binary operator+(binary &obj)
        {
            binary temp;
            temp.a=a+obj.a;
            temp.b=b+obj.b;
            return temp;
        }
        void display()
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b;
        }
};

int main()
{
    binary op(20,40);
    binary op1(30,50);
    binary op2;
    op2=op.operator+(op1);  //or -->  op2=op+op1;
    op2.display();
    return 0;
    
}