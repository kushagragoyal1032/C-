#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    char emp_name[50];
    int emp_age;

    ofstream obj1;
    obj1.open("book.txt");
    cout<<"enter the name ";
    cin.getline(emp_name,50);
    obj1<<emp_name;
    obj1.close();
    ifstream obj2;
    obj2.open("book.txt");
    cout<<"this is emp_name = ";
    obj2>>emp_name;
    cout<<emp_name<<endl;
    obj2.close();

    ofstream obj3;
    obj3.open("book.txt"); 
    cout<<"enter the age ";
    cin>>emp_age;
    cin.ignore();
    obj3<<emp_age;
    obj3.close();
    ifstream obj4;
    obj4.open("book.txt");
    cout<<"this is emp_age = ";
    obj4>>emp_age;
    cout<<emp_age<<endl;
    obj4.close();
    return 0;
}
