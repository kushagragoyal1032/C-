
#include<iostream>
using namespace std;


class base
{                                       
        protected:
            int a;
            public:
            base()
            {
                cout<<"enter the value of a = ";
                cin>>a;
            }
};


class derive1 : private base
{
    int c=1,i;
    public:
        void logic()
        {
          for(i=1;i<=a;i++)
          {
            c=c*i;
          }
        }
        void display1()
        {
            cout<<"your factorial is = "<<c;
        }
};

int main()
{
    derive1 obj1; 
    obj1.logic();   
    obj1.display1(); 

  
    return 0;
}


/*
#include<iostream>
#include<stdio.h>
using namespace std;
class base {
protected:
int n;
public:
base(){
n=4;
}
int get_n(){
return n;
}
};

class derive : private base{
public:
void fac(){
int i;
int fac = 1;
int num = get_n();
for (i = num; i>1; i--){
fac = fac * i;
}
cout<<"Factorial : "<<fac;
}
};

int main()
{

derive d;
d.fac();
return 0;
}
*/