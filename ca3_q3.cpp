#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i,j,n;

    ofstream obj1;
    obj1.open("Kushahgra.txt");

    cout<<"enter the range where u want to print prime numbers = ";
    cin>>n;
    cout<<"the prime numbers are:"<<endl;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {   
            cout<<i<<" ";
        }
    }
    cout<<endl<<"prime numbers are stored in file.";
    obj1.close();
   
    
return 0;
}