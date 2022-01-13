#include<iostream>
using namespace std;



void fact(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"ans is = "<<fact;
}

void input(int a)
{
    int all=a;
    
    fact(all);
}

int main()
{   int all;
    cout<<"enter the value = ";
    cin>>all;
    input(all);
    return 0;
}