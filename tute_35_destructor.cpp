#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this time for call constructor" << count << endl;
    }
    ~num()
    {
        cout << "this time for call destructor" << count << endl;
        count--;
    }
};

int main()
{
    cout << "creating 1st obj" << endl;
    num t1;
    {
        cout << "creating more object " << endl;
        num t2, t3;
        cout << "exiting block"<<endl;
    }
    return 0;
}