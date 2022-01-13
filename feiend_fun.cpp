#include<iostream>
using namespace std;

class stu
{
    int a,b;
    friend int friend_logic(stu,stu);
    public:
        void get()
        {
            cout<<"enter the data of a and b = "<<endl;
            cin>>a;
        }
};

int friend_logic(stu op,stu op1)
{
    int sum;
    sum=op.a+op1.a;
    //cout<<"sum is = "<<sum;
    return sum;
}

int main()
{
    stu obj1,obj2;

    obj1.get();
    obj2.get();
    cout<<friend_logic(obj1,obj2);
    return 0;
}

