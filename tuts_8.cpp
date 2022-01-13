#include<iostream>
#include<iomanip> //use for setw()
using namespace std;

int main()
{
   //int a = 2;
   //cout<<"a is = "<<a<<endl;
   // a = 4;
   //cout<<"a is  = "<<a<<endl;
    //we can make a variable as contant

    int a = 2,b=34,c=3463;
    cout<<"a is without setw = "<<a<<endl;
    cout<<"b is without setw = "<<b<<endl;
    cout<<"c is without setw = "<<c<<endl<<endl;

    cout<<"a is with setw = "<<setw(4)<<a<<endl;
    cout<<"b is with setw = "<<setw(4)<<b<<endl;//setw() for set width
    cout<<"c is with setw = "<<setw(4)<<c<<endl;

    
    
    return 0;
}