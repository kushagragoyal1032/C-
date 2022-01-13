#include<iostream>
using namespace std;

void primefactor(int N, int M)
{
    int divible=0;
    int starts = N+1;
    int c = 0;
    int result;
    
        if(N%2==0)
        {
            
            divible=2;
        }
        else if(N%3==0)
        {
            divible=3;
        }
        else if(N%5==0)
        {
            divible=5;
        }
        else if(N%7==0)
        {
           divible=7;
        }
        else
        {
            divible=1;
        }
        
        // for (int i = 1; i <=M; i++)
        // {
        while(1)
        {
        if(c==M)
        {
           break;
        }
        result = starts/divible; 
        if(starts%divible==0 && starts/2!=N)
        {
          cout<<starts<<" "; 
          c++;
        }
        starts++;   
        }
}

int main()
{
    primefactor(9,3);
    return 0;
}