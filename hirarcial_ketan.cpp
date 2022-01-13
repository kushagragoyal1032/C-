#include<iostream>
using namespace std;

class base
{   protected:
    string noplate[2];
    string carname[2];
    public:
        void getx(string x, string y)
        {
            noplate[0]= x;
            carname[0]= y;
        }
        void gety(string x, string y)
        {
            noplate[1]= x;
            carname[1]= y;
        }
};

class derived1 : protected base
{
    string owner1;
    public:
        void getname1(string a)
        {
            owner1 = a;
        getx("rj-11-1234","Lamborghini");
        }
        void put1()
        {
            cout<<"the name of owner is ="<<owner1<<endl;
            cout<<"the name of car is = "<<carname[0]<<endl;
            cout<<"the number of the car is = "<<noplate[0]<<endl<<endl<<endl;
        }
};

class derived2 : protected base
{
    string owner2;
    public:
        void getname2(string b)
        {
            owner2= b;
        gety("rj-14-5675","Audi");
        }
         void put2()
        {
            cout<<"the name of owner is ="<<owner2<<endl;
            cout<<"the name of car is = "<<carname[1]<<endl;
            cout<<"the number of the car is = "<<noplate[1]<<endl;
        }
};


int main()
{   
    derived1 obj1;
    derived2 obj2;
    //obj1.getx("rj-11-1234","Lamborghini");
    obj1.getname1("ramu");
    obj1.put1();
    //obj2.gety("rj-14-5675","Audi");
    obj2.getname2("chiyamu");
    obj2.put2();

    return 0;
}