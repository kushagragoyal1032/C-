#include<iostream>
using namespace std;

int forgot(int a)
{
    int count = 0;
    for(int i=1 ; i<a ; i++)
    {   
        for(int j=1 ; j<a/2 ; j++)
        {
            if(i+j == a & i!=j )
            {
                count++;
                cout<<"( "<<i<<" ,"<<j<<" )";
            }
        }
    }
    return count;
}

int main()
{
    int a;
    cin>>a;
    cout<<forgot(a);
}