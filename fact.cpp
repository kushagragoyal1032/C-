#include <iostream>
using namespace std;

class fac
{
    public:
        int i,fact=1;
        int num;
       void logic()
       {
           cout<<"Enter the Number\n";
            cin>>num;
            for(i=1;i<=num;i++)
            {  
             fact=fact*i;
            }
            cout<<"The Factorial is\n"<<fact;
       } 
        

};




int main()
{
fac f1;
f1.logic();

return 0;
}