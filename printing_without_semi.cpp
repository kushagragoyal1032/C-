/*
#include<iostream>
using namespace std;

int main()
{
    if(cout<<"kush")
    {

    }
    return 0;
}
*/

// swap 2 values wihout third variable

#include<iostream>
using namespace std;

int main()
{
   int a = 10;
   int b = 20;

//    a = a+b; //10 = 10+20 =>30
//    b = a-b; //10 = 30-20 =>10
//    a = a-b; //30 = 30-10 =>20

// or

//    a=a*b; 
//    b=a/b; 
//    a=a/b;

// or
// using XOR

    // a=a^b; 
    // b=b^a; 
    // a=a^b;

//or
//b = (a*b)/(a=b);

//or
a^=b^=a^=b;


   cout<<a<<b;

   return 0;
}