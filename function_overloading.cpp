#include<iostream>
using namespace std;

class base
{
    string name;
    int age;
    float marks;
    public:
        void get_a(string t_name, int t_age)
        {
            name = t_name;
            age  = t_age;
        cout<<"name is = "<<name<<endl;
        cout<<"age is  = "<<age<<endl;
        }
        void get_a(string j_name, float j_marks)
        {
            name = j_name;
            marks  = j_marks;
         cout<<"name is = "<<name<<endl;
         cout<<"marks is  = "<<marks<<endl;
        }
};

int main()
{
    base obj1;
    obj1.get_a("kushara",19);
    obj1.get_a("ketan",54.7f);
    return 0;
}