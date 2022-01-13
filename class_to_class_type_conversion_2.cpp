#include<iostream>
using namespace std;

class sourse
{
    int kg;
    int g;
        public:
            void get(int a,int b)
            {
                kg=a;
                g=b;
            }
            void put()
            {
                cout<<"the kg is = "<<kg<<endl;
                cout<<"the g is = "<<g<<endl;
            }
            int conversion()
            {
                int totalg = (kg*1000)+g;
                return totalg; 
            }
};

class destination
{
    int m;
        public:
            destination()
            {
                m=0;
            }
            void operator=(sourse op)
            {
                m = op.conversion();
            } 
            void put1()
            {
                cout<<"this is the total grams = "<<m<<endl;
            }
};

int main()
{
    sourse obj1;
    obj1.get(4,600);
    obj1.put();
    destination obj2;
    obj2.put1();
    obj2=obj1;
    obj1.put();
    obj2.put1();
    return 0;
}