#include<iostream>
using namespace std;

class base
{   public:
    virtual void fibo_logic()=0;
};
class derived : public base
{
    private:
    int a=0,b=1,c=0,n,i;
    public:
    void fibo_logic()
    {  
         cout<<"enter the value till u want the print fiboniki = "<<endl;
        cin>>n;
        cout<<a<<" "<<b<<" ";
        for(i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
};
int main()
{ 
   base *p;
   derived obj1;

   p = &obj1;
   (*p).fibo_logic();

   return 0;
}
