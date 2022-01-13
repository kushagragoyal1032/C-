#include<iostream>
using namespace std;

class stu;
class friend_class
{   
    public:
    void logic_friend(stu,stu);
};

class stu
{
    int a;
    friend void friend_class::logic_friend(stu,stu);
    public:
        void get()
        {
            cout<<"enter the data = "<<endl;
            cin>>a;
        }
};


void friend_class::logic_friend(stu op,stu op1)
{
    int sum;
    sum=op.a+op1.a;
    cout<<"sum is = "<<sum;
}

int main()
{
     stu obj1,obj2;
     friend_class friend_obj;
    obj1.get();
    obj2.get();
    friend_obj.logic_friend(obj1,obj2);
    return 0;
}

