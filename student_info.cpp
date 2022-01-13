#include<iostream>
using namespace std;

class Employee
{
  private :
    string name,address;
    int joining_year,salary;
  public:
    void get()
    {
        cout<<"enter the name "<<endl;
        cin>>name;
        cout<<"enter the joining of the year = "<<endl;
        cin>>joining_year;
        cout<<"enter the address = "<<endl;
        cin>>address;
        cout<<"enter the salary = "<<endl;
        cin>>salary;
    }
    void head()
    {
         cout<<"Name"<<"\t\t"<<"year of joining"<<"\t\t"<<"address"<<"\t\t"<<"salary"<<endl;
    }
    void put()
    {
        cout<<name<<"\t\t"<<joining_year<<"\t\t\t"<<address<<"\t\t"<<salary<<"\n";
    }
};

int main()
{
    Employee cp1,cp2;
    cp1.get();
    cp2.get();
    cp1.head();
    cp1.put();
    cp2.put();

    return 0;
}