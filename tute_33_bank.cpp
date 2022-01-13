#include<iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r)
    {
        principal= p;
        years = y;
        interestrate =  r;
        returnvalue = principal;
        for(int i=0;i<years;i++)
        {
            returnvalue = returnvalue * (1+interestrate);
        }

    }
    bankdeposit(int p,int y,int R)
    {
        principal= p;
        years = y;
        interestrate =  float(R)/100;
        returnvalue = principal;
        for(int i=0;i<years;i++)
        {
            returnvalue = returnvalue * (1+interestrate);
        }

    }
    
    void show(void)
    {
        cout<<endl<<"Principal amount was = "<<principal<<endl
        <<" and returnvalue is after "<<years<<" years is  ="<<
        returnvalue<<endl;
    }
};

int main()
{  int p,y;
    float r;
    int R;

    cout<<"enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bankdeposit bd1(p,y,r);
    bd1.show();

 cout<<"enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bankdeposit bd2(p,y,R);
    bd2.show();
}

