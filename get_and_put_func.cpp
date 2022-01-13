#include<iostream>
using namespace std;

int main()
{
    int count=0;
    char ch;
    cout<<"enter text"<<endl;
    while( ch!='\n')
    {
        cin.get(ch);
        cout.put(ch);
        count++;
    }
    cout<<"the no of characters = "<<count-1;
    return 0;
    
}