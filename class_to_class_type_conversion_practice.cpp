#include<iostream>
using namespace std;

class base
{  
    public:
    int gream;
    int kg;
    int total_gram;
    base()
    {
        cout<<"enter in the constructor****___****"<<endl;
    }
    base(int x,int y)
    {
        kg = x;
        gream = y;
    }
    int conversion()
    {
        total_gram = (kg*1000)+gream;
        return total_gram;
    }
     display()
    {
        cout<<"kg is = "<<kg<<endl;
        cout<<"gram is = "<<gream<<endl;
    }
};

class source
{   int q;
    public:
        source()
        {
            q=0;
        };
        void operator=(base op)
        {
            q = op.conversion();
        }
        void display()
        {
            cout<<"total gram is  = "<<q<<endl;
        }
};

int main()
{
    base obj1(2,340);
    obj1.display();
    source op1;
    op1.display();
    op1 = obj1;
    obj1.display();
    op1.display();
    return 0;

}