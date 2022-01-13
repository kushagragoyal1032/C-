#include<iostream>
using namespace std;

int main()
{
    int i,marks[4],*p[5];
    for(i=0;i<4;i++)
    {
      p[i] = &marks[i];
    }
    cout<<"enter the marks = ";
    for(i=0;i<4;i++) 
    {
    cin>>*p[i];
    }
    for(i=0;i<4;i++)
    {
    cout<<*p[i]<<"\n";
    }
    return 0;
}    
