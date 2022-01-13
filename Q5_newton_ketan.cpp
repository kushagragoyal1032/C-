#include<iostream>
using namespace std;

static void pattern(int n)
{
    int temp1= 0;
    int temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        temp2=temp1;
        for (int j = 0; j < n; j++)
        {
            
            cout<<temp2<<"\t";
            temp2+=4;

        }
        temp1+=6;
        cout<<endl;
        
    }
    
}

int main()
{
  
    int N;
    cin>>N;
   
    pattern(N);

    return 0;
}