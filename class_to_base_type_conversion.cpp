#include<iostream>
using namespace std;

class baseri
{
    int a;
    public:
        void get(int q)
        {
          a=q;
        }
        operator int()
        {
            int x;
            x=a;
            return x;
        }
        
};

int main()
        {
            baseri s;
            s.get(100);
            int y=s;
            cout<<"this is value of a = "<<y;
            return 0;
        }
        