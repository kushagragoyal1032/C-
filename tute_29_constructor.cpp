#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void)  //constructor declaration   
    {
        a = 10;
        b = 20;
    }
    void print(void)
    {
        cout << "the value of a = " << a << " and b = " << b;
    }
};

int main()
{
    complex a;
    a.print();
    return 0;
}