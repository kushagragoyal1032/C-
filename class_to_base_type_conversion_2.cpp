#include<iostream>
using namespace std;

class basic
{
    int a;
        public:
            basic(int x)
            {
                a=x;
            }
            operator int()
            {
                int q;
                q=a;
                return q;
            }
            
};

int main()
{
    basic obj1(100);
    int y;
    y=obj1;
    cout<<y;
    return 0;

}