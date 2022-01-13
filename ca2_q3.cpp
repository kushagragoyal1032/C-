#include<iostream>
using namespace std;

class complex
{  
    public:
    int a,b;
    complex()
    {
                                
    }
    complex(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"this is the ans = "<<a;
    }
     friend complex operator *(complex &op,complex &op1);
};

complex operator *(complex &op,complex &op1)
{
    complex temp;
    temp.a = op.a*op1.a;
    return temp;
}

int main()
{  
    int p,q;
     cout<<"enter the value of a = "<<endl;
    cin>>p;
     cout<<"enter the value of b = "<<endl;
    cin>>q;
    complex obj1(p);
    complex obj2(q);
    complex obj3;
    obj3 = operator *(obj1,obj2);
    obj3.display();
    return 0;
}