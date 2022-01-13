#include<iostream>
using namespace std;

class test1
{   public:
        int a,b;
        static int count;
    static void counting()
    {
        
        cout<<"now the count of student is = "<<count<<endl; 
    }
    void get()
    {
        cout<<"enter the marks of student = ";
        cin>>a;
        cin>>b;
    }
    void put()
    {
        cout<<"this the marks of student = "<<a<<"\t"<<b<<endl;
        count++;
    }
};

int test1::count;

int main()
{
    test1 obj,obj1;
    obj.get();
    obj.put();
    test1::counting();

    obj1.get();
    obj1.put();
    test1::counting();
    return 0;
}