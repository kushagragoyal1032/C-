#include<iostream>
using namespace std;


void persentage(int p,int q,int r,int s)
{
    int sum,per;
    sum=p+q+r+s;
    per=sum/4;

    cout<<"this is sum of total marks = "<<sum;
    cout<<endl<<"this is the percentage = "<<per<<"%";
}

void pass1()
{   int a,b,c,d;
    cout<<"enter the marks of 4 students"<<endl;
    cin>>a>>b>>c>>d;
    persentage(a,b,c,d);
}

int main()
{
    pass1();
    return 0;
}