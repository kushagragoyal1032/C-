#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void put(void)
    {
        cout<<"your value of a = "<<a<<" and b = "<<b<<endl;
    }
        friend complex sumcomplex(complex o1,complex o2);
};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.set((o1.a+o2.a),(o1.b+o2.b));
    return o3;
} 

int main()
{
    complex c1,c2,sum;
    c1.set(10,39);
    c1.put();
    
    c2.set(42,30);
    c2.put();
    
    sum = sumcomplex(c1,c2);
    sum.put();

    return 0;
}
