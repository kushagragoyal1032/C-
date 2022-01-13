#include<iostream>
using namespace std;

class employee
{
    private:
    int a,b,c;
    public:
    void getdata(void);
    void putdata(void);
};

void employee :: getdata(void)
{
    cout<<"enter tha value of a and b  = ";
    cin>>a>>b;
}

void employee :: putdata(void)
{
    c = a+b;
    cout<<"sum is = "<<c;
}

int main()
{
employee obj;
obj.getdata();
obj.putdata();
 return 0;

}