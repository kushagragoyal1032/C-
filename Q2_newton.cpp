#include<iostream>
using namespace std;

static int dishes(int N, int T)
{
    T = T - N;
    return T;    
}

int main()
{
int N, T;
int a;
cin>>T;
cin>>N;
cout<<dishes(N,T);
}



