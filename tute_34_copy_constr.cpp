#include<iostream>
using namespace std;

class test
{
    int a;
    public:
    test(){
        a=0;
    }
    test(int x)
    {
        a=x;
    }

    test(test &x)
    {
        cout<<"copy consructure called"<<endl;
        a= x.a;
    }

    void display(void)
    {
        cout<<"the no of this obj = "<<a<<endl;
    }
};

int main()
{
   test c1,c2,c3(45);
   c1.display();
   c2.display();
   c3.display();

   test c4(c3);
   c4.display();

   test c5 = c1;
    c5.display();
   return 0;

}
