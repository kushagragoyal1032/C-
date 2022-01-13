#include<iostream>
using namespace std;

class parent
{
    int a;
        public:
            int b;
            void get()
            {
                cout<<"enter the value of a = "<<endl;
                cin>>a;
                //cout<<"enter the value of b = "<<endl;
                //cin>>b;
            }
            int get_a()
            {
                return a;
            }
};

class child : public parent
{
    int c=1,i;
        public:
            
            void fact()
            {
                for(i=1;i<=get_a();i++)
                {
                    c=c*i;
                }     
            }
            void display()
            {
                //cout<<"this is a value of a = "<<get_a()<<endl;
                //cout<<"this is a value of b = "<<b<<endl;
                cout<<"fact is = "<<c<<endl;
            }
};

int main()
{

child obj1;

obj1.get();
obj1.fact();
obj1.display();
    return 0;
}