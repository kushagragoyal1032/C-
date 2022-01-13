#include<iostream>
using namespace std;

void pattern(int n)
{
    int a = 0;
    int aa = 0;
    for(int i=0 ; i<n; i++)
    {   
        a = aa;
        for(int j=0 ; j<n; j++)
        {
            cout<<a<<"  ";
            a = a + 4;
        }
        cout<<endl;
        aa = aa + n;
    }
}

int main()
{
    int a;
    cin>>a;
    pattern(a);
    return 0;
}
