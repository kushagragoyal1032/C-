#include<iostream>
using namespace std;

int makeone(int n)
{
    int count = 0;
    while(n>1 & n>0)
    {
        count++;
        if(n%2==0)
        {
            n = n/2;
        }
        else
        {
            n = n+1;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<makeone(n);
    return 0;
}