#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[32];
    int cost;

    ofstream obj1;
    obj1.open("data");
    obj1<<"table_and_chair"<<endl;
    obj1<<"12984"<<endl;
    obj1.close();

    ifstream obj2;
    obj2.open("data");
    obj2>>name;
    obj2>>cost;
    cout<<"name is = "<<name<<endl;
    cout<<"cost is = "<<cost<<endl;
    obj2.close();

    return 0;

}