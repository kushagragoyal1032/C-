#include<iostream>
using namespace std;


class base
{
    protected:
        string ch;
    public:
        void get_a(string x)
        {
            ch = x;
        }
};

class base1
{
    protected:
        string ch1;
    public:
        void get_b(string y)
        {
            ch1 = y;
        } 
};

class derived : protected base, protected base1
{
    public:
        void get()
        {
            get_a("raman");
            get_b("Goyal");
        }
        void display()
        {
           
            cout<<ch<<endl;
            cout<<ch1<<endl;
            cout<<ch<<" + "<<ch1<<endl;
        }
};

int main()
{
    derived obj;
    obj.get();
    obj.display();
    return 0;
}