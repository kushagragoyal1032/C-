#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
        base1(int a)
        {
            data1= a;
        }
        void printbase1(void)
        {
            cout<<"the value of data1 is = "<<data1<<endl;
        }
};

class base2        
{
    int data2;
    public:
        base2(int a)
        {
            data2= a;
        }
        void printbase2(void)
        {
            cout<<"the value of data2 is = "<<data2<<endl;
        }
};

class derieved : public base1 , public base2
{
    int derieved1,derieved2;
    public:
        derieved(int a,int b,int c,int d) : base1(a),base2(b)
        {
            derieved1=c;
            derieved2=d;
        }
        void printderieved(void)
        {
            cout<<"the value of derieved1 is = "<<derieved1<<endl;
            cout<<"the value of derieved2 is = "<<derieved2<<endl;
        }
};

int main()
{
    derieved harry(4,6,7,3);
    harry.printbase1();
    harry.printbase2();
    harry.printderieved();
    return 0;

}
