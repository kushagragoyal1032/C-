#include<iostream>
using namespace std;

int main()
{
    char name[20];
    cout<<"enter the string = "<<endl;
    cin.getline(name,15);
    cout.write(name,11)<<endl;
    cout<<"name = "<<name;
    return 0;
}