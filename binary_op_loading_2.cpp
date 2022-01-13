#include<iostream>
using namespace std;

class dairy
{
    int a,b;
        public:
            dairy()
            {

            }
            dairy(int x,int y)
            {
                a=x;
                b=y;
            }
            dairy operator*(dairy &op)
            {
                dairy temp;
                temp.a=a*op.a;
                temp.b=b*op.b;
                return temp;
            }
           
            void put()
            {
                cout<<"milk price = "<<a<<endl;
                cout<<"butter price = "<<b;
            }
};

int main()
{   
   int c,d;
    cout<<"milk is 40rs./liter"<<endl<<"enter the liter of milk = ";
    cin>>c;
    cout<<endl<<"butter is 10rs./peace"<<endl<<"enter the peace of butter = ";
    cin>>d;
    dairy obj1(c,d);
    dairy obj2(40,10);
    dairy obj3;
    obj3=obj1*obj2;
    obj3.put();
    return 0; 
}