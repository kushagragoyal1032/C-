#include<iostream>
using namespace std;

class pass
{
    int a,b,c;
    public:
        void get()
        {
            cout<<"enter the data of a = ";
            cin>>a;
            cout<<"entert the data of b = ";
            cin>>b;
        }
        pass fun(pass o1,pass o2)
        {
            pass o3;
            o3.c=o1.a+o2.a;
            return o3;
        }
        void put()
        {
            cout<<"your sum is = "<<c<<endl;
        }
};

int main()
{
    pass obj,obj2,ob;
    obj.get();
    obj2.get();
    ob=ob.fun(obj,obj2);
    ob.put();
    return 0;

    
}