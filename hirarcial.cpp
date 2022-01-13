#include<iostream>
using namespace std;

class owner
{   protected:
    string name;
    public:
        void owner_name()
        {
           cout<<"enter the name of car owner = "<<endl;
           cin>>name;
        }
};

class derieved1 : protected owner
{
    string car_1;
    int salary_1;
    public:
        void get_a()
        {  
            owner_name();
            cout<<"enter the name of your 1st car = "<<endl;
            cin>>car_1;
            cout<<"enter the salary of your 1st car"<<endl;
            cin>>salary_1;
        }
        void put_a()
        {
            cout<<endl<<endl<<"the owner of the car is = "<<name<<endl;
            cout<<"name of your 1st car = "<<car_1<<endl;
            cout<<"salary of your 1st car = "<<salary_1<<endl;
        }
};

class derieved2 : protected owner
{
    string car_2;
    int salary_2;
    public:
        void get_b()
        {
            owner_name();
            cout<<endl<<endl<<"enter the name of your 2st car = "<<endl;
            cin>>car_2;
            cout<<"enter the salary of your 2st car = "<<endl;
            cin>>salary_2;
        }
        void put_b()
        {
            cout<<endl<<endl<<"the owner of the car is = "<<name<<endl;
            cout<<"name of your 2st car = "<<car_2<<endl;
            cout<<"salary of your 2st car = "<<salary_2<<endl;
        }
};

int main()
{
    derieved1 obj;
    obj.get_a();
    derieved2 obj1;
    obj1.get_b();
    obj.put_a();
    obj1.put_b();
    return 0;
}
