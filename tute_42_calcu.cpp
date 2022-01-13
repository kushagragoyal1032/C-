#include<iostream>
#include<cmath>
using namespace std;

class simple_calc
{
    protected:
    int a,b;
    int add,sub,multi,divi;
    public:
    void set_simple(void)
    {
        cout<<"enter the value of a = "<<endl;
        cin>>a;
        cout<<"enter the value of b = "<<endl;
        cin>>b;
        add= a+b;
        sub=a-b;
        multi=a*b;
        divi= a/b;
    }
    void get_simple(void)
    {
        cout<<"addition is  = "<<add<<endl;
        cout<<"substration is  = "<<sub<<endl;
        cout<<"multiplication is  = "<<multi<<endl;
        cout<<"division is  = "<<divi<<endl;
    }
};

class scint_calc
{
    protected:
    int x;
    int sqr;
    public:
    void set_scint(void)
    {
        cout<<"enter the value of x"<<endl;
        cin>>x;
    }
    void get_scint(void)
    {
        cout<<"the squre root of "<<x<<" is "<<sqrt(x)<<endl;
    }
};

class derieved : public simple_calc ,public scint_calc
{
    public:
    void show()
    {
        get_simple();
        get_scint();
    }
};


int main()
{
    derieved db1;
    db1.set_simple();
    db1.set_scint();
    db1.show();
    return 0 ;
}



