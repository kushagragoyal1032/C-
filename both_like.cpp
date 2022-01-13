#include<iostream>
using namespace std;
int DragonSlayer(int A, int B, int C,int D)
{
    int natasu_attack;
    int dragon_attack;
    while(A>0 || C>0)
    {
        
    
        A = A - D;
        cout<<A;
        cout<<B;
        cout<<C;
        cout<<D<<endl;
        if(A<=0)
        {
        return 1;
        }
        
        
        C = C - B;

        cout<<A;
        cout<<B;
        cout<<C;
        cout<<D<<endl;
        if(C<=0)
        {
        return 0;
        }
    }
return 0;    
}

int main()
{
  
    cout<<DragonSlayer(8,2,5,3);
    return 0;
}