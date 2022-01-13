#include<iostream>
using namespace std;

class test
{
    private:
        int a,b;
        friend void logic(test ,test);
    public:
        void get()
        {
        cout<<"enter the value of a and b";
        cin>>a>>b;
        }
        
};

void logic(test e1,test e2)
{
    int c=e1.a+e1.b;
    int d=e2.a+e2.b;
    cout<<"the addition of 1st stu = "<<c<<"\n";
    cout<<"the addition of 2st stu = "<<d;
}

int main()
{
    test t1,t2;
    t1.get();
    t2.get();
    logic(t1,t2);
    return 0;
}
