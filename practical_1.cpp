#include<iostream>
using namespace std;

class myclass
  { private:
    char name[10];
    int marks1 , marks;
    public:
    void get()
    {
    cout<<"enter the name = "<<endl;
    cin>>name;
    cout<<"enter the marks of dbms = ";
    cin>>marks1;
    cout<<endl<<"enter the marks of c++ = ";
    cin>>marks;
    }


void put()
{
    cout<<"the name = "<<name<<endl;
    cout<<"dbms marks = "<<marks1<<endl;
    cout<<"c++ marks = "<<marks<<endl; 
}  
}; 

int main()
{
    myclass s1;

    s1.get();
    s1.put();
    return 0;
}
