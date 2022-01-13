#include<iostream>
using namespace std;

class base_to_class
{

    base_to_class()
    {

    };
    base_to_class(int m)
    {
        int gram = kg/1000;
    }
    void display()
    {
        cout<<"now the grams is = "<<gram;
    }
};

int main()
{
    int x;
    cout<<"enter the kg = "<<endl;
    cin>>x;
    base_to_class obj1(x);
    obj1 = x;
    obj1.display();
    return 0;
}