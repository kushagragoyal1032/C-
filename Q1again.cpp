#include<iostream>
using namespace std;

int OccurenceOfX(int N,long X)
{
    //Enter your code here
    int count=0;
    int val = 0;
    for(int i=1 ; i<=N ; i++)
    {
        for(int j=1 ; j<=N ; j++)
        {
            val = i*j;
            if(val == X)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
  
    int N,X;
    cin>>N>>X;
   
   cout<<OccurenceOfX(N,X);
    return 0;
}