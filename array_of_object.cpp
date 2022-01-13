#include<iostream>
using namespace std;

class student
{   public:
    int a,b,c;
    void get()
    {
        cout<<"enter the marks os student = ";
        cin>>a>>b>>c;
    }
    void put()
    {
        cout<<endl<<"this is the marks of 3 sub ="<<a<<endl<<b<<endl<<c;
        int sum=a+b+c;
        cout<<endl<<"this is sum = "<<sum;
    }
};

int main()
{
    
    int n,i;
    cout<<"how many student = "<<endl;
    cin>>n;
    student stu[n];
    for(i=1;i<=n;i++)
    {
        stu[i].get();
    }
    for(i=1;i<=n;i++)
    {
        stu[i].put();
    }
return 0;
}