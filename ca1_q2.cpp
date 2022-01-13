#include<iostream>
using namespace std;

class pali_class
{
    private:
        int a,b,rev=0,temp;
        friend void pali_logic(pali_class);
    public:
        void pali_get()
        {
            cout<<"enter the data to check palindrome or not = "<<endl;
            cin>>a;
            temp=a;
        }    
};

void pali_logic(pali_class op)
{
    while(op.a>0)
    {
        op.b=op.a%10;
        op.rev=(op.rev*10)+op.b;
        op.a=op.a/10;
    }
    if(op.temp==op.rev)
    {
        cout<<"this is the palindrome no..."<<endl;
    }
    else
    {
        cout<<"this is the not palindrome no..."<<endl;
    }
}

int main()
{   

    pali_class p1;
    p1.pali_get();
    pali_logic(p1);
    //pali_logic(p1);
    return 0;
}