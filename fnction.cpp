#include<iostream>
using namespace std;

int callbyvalue(int &x,int &y)
{
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    int a=3,b=5;
    cout<<"value of a = "<<a<< "  "<<"value of b = "<<b<<endl;
    //callbyvalue(a,b); //call by value not swap
    //callbyvalue(&a,&b);  //call by pointer refference  swap
    callbyvalue(a,b);       // call by refference variable swap
    cout<<"value of a = "<<a<<" "<<"value of b = "<<b;
    return 0 ;
}