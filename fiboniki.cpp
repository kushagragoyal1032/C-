#include<iostream>
using namespace std;

class fibo
{   public:
        int a,b,c=0,i,n;
        void fibo_logic()
        {
            a=0;
            b=1;
            cout<<"enter the no. that how terms you want to print = "<<endl;
            cin>>n;
            cout<<endl<<a<<"\t"<<b<<"\t";
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