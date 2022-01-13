#include<iostream>
using namespace std;

class student
{
    protected:
        string name;
        int age;
        char gender;
    public:
        void get_details();
        void put_details();
        
};

class display : public student
{
    public:
     void get_details(string n, int a, char g)
        {
            name = n;
            age = a;
            gender = g;
        }
        void put_details()
        {
            cout<<"name = "<<name<<endl;
            cout<<"age = "<<age<<endl;
            cout<<"gender = "<<gender<<endl;
        }
};

int main()
{
    display obj1;
    obj1.get_details("kush",20,'M');
    obj1.put_details();
}