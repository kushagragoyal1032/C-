#include<iostream>
using namespace std;

class fibo
{
    int a=0,b=1,c=0,n;
    friend void frnd_logic(fibo);
    public:
        void get()
        {
            cout<<"enter the range"<<endl;
            cin>>n;
        }

};

void frnd_logic(fibo f)
{
    cout<<f.a<<"\t"<<f.b<<"\t";
    for(int i=3;i<=f.n;i++)
    {
        f.c=f.a+f.b;
        f.a=f.b;
        f.b=f.c;
        cout<<f.c<<"\t";
    }
}

int main()
{
    fibo f1;
    f1.get();
    frnd_logic(f1);
    return 0;
}

