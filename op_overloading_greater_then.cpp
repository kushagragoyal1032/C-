#include<iostream>
using namespace std;

class currency
{
    int rs, paisa;
    public:
        currency()
        {

        }
        currency(int x,int y)
        {
            rs = x;
            paisa = y;
        }
        bool operator >(currency &q)
        {
            if(rs > q.rs)
            {
                return true;
            }
            if(rs == q.rs && paisa > q.paisa)
            {
                return true;
            }
            return false;      
        }

        void print()
        {
            cout<<"rs = "<<rs<<endl;
            cout<<"paisa = "<<paisa;
        }
};

int main()
{
    currency obj1(20,45), obj2(45,65);

    if(obj1.operator >(obj2) )
    {
        cout<<"obj1 is greater "<<endl;
    }
    else
    {
        cout<<"obj2 is greater "<<endl;
    }

    return 0;
    
}