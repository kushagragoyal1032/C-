#include<iostream>
using namespace std;

class fibo
{
  public:
    int a=0,b=1,c=0,n,i;  
    void fibo_logic()
    {
        cout<<"enter the no that till how term you want to print = "<<endl;
        cin>>n;
        cout<<a<<"\t"<<b<<"\t";
        for(i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<"\t";
        }
    }
};
int main()
{
    fibo f1;
    f1.fibo_logic();
    return 0;
}