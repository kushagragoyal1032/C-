#include<iostream>
using namespace std;

class test2;
class test1
{   public:
    void logic(test2,test2);
};
class test2
{
    int a,b;
    friend void test1::logic(test2,test2);
    public:
        void get()
        {
            cout<<"enter the marks of student"<<endl;
            cout<<"enter c marks = ";
            cin>>a;
            cout<<"enter dbms marks =";
            cin>>b;
        }
};

void test1::logic(test2 t1,test2 t2)
{
    int sum1,sum2;
    sum1= t1.a+t2.a;
    sum2= t1.b+t2.b;
    cout<<"this is the marks of c subject of both student = "<<sum1<<endl;
    cout<<"this is the marks of dbms subject of both student = "<<sum2;
}

int main()
{
    test2 obj1,obj2;
    obj1.get();
    obj2.get();
    test1 friend_obj;
    friend_obj.logic(obj1,obj2);
    return 0;
}
