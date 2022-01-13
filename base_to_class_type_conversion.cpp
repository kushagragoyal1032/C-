#include<iostream>
using namespace std;

class basiwc
{
    int a;
    public:
         
         basiwc()
        {  
            cout<<"consttructor called = "<<endl;
        }
        basiwc(int c)
        {
            a=c;
         
        }
        void disp()
        {
            cout<<"this is the value of a = "<<a<<endl;
        }
};

int main()
{
    int m=10;
    basiwc ob1;
    ob1=m;
     ob1.disp();
    return 0;




}