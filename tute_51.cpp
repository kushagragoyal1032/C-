#include<iostream>
using namespace std;

class base
{
    int rocket,launcher;
    public:
        void set(int a,int b)
        {
            rocket = a;
            launcher = b;
        }
        void get(void)
        {
            cout<<"the value of rocket = "<<rocket<<endl;
            cout<<"the value of launcher = "<<launcher<<endl;
        }

};

int main()
{
    base *ptr = new base;
    (*ptr).set(34,7);
    ptr-> get();

//array of objects
 base *ptr1 = new base[3];
  (*ptr1).set(64,6);
  (*ptr1).get();

 ptr1[1].set(65,7);
 ptr1[1].get();

    return 0;
}
