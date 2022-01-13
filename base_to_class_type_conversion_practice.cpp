#include<iostream>
using namespace std;

class base_to_class
{
    public:
    int gram;
    base_to_class()
    {
    
    };
    base_to_class(int m)
    {
        gram = m*1000;
    }
    void display()
    {
        cout<<"now the grams is = "<<gram<<endl;
    }
};

int main()
{
    base_to_class obj1;
    int x;
    cout<<"enter the kg = "<<endl;
    cin>>x;
    obj1 = x;
    obj1.display();
    return 0;
}