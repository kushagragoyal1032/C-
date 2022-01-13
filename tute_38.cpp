#include<iostream>
using namespace std;

class base
{
    int data1;
    public:
    int data2;
    void setdata(void)
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1(void)
    {
        return data1;
    }

    int getdata2(void)
    {
        return data2;
    }
};

class derieved : public base
{
    int data3;
    public:
    void process(void)
    {
        data3 = data2 * getdata1();
    }
    void print(void)
    {
        cout<<"the value of data 1 is = "<<getdata1()<<endl;
        cout<<"the value of data 2 is = "<<data2<<endl;
        cout<<"the value of data 3 is = "<<data3<<endl;
    }
};

int main()
{
    derieved db1;
    db1.setdata();
    db1.process();
    db1.print();
    return 0;
}