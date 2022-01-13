#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char item_name[23];
    int item_price;

    ofstream obj1("data");
    cout<<"enter the name of the item"<<endl;
    cin>>item_name;
    cout<<"enter the price of the item"<<endl;
    cin>>item_price;
    obj1<<item_name<<"\n";
    obj1<<item_price<<"\n";
    obj1.close();

    ifstream obj2("data");
    obj2>>item_name;
    obj2>>item_price;
    cout<<"name of item is = "<<item_name<<endl;
    cout<<"cost of item is = "<<item_price<<endl;
    obj2.close();

    return 0;
}

