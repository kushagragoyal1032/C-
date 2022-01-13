#include<iostream>
using namespace std;

class rent
{
    int a;
    int b; 
        public:          
            void put()
            {
                cout<<"enter the your rent amount = "<<endl;
                cin>>a>>b;
            }
            friend rent operator-(rent &op,rent &op1);
            void display()
            {
                cout<<"now this is the your rend with tex = "<<a<<endl;
            }
};
 rent operator-(rent &op,rent &op1)
            {
                rent temp;
                temp.a=op.a-op1.a;
                return temp;
            }


int main()
{
    rent obj1;
    rent obj2;
    obj1.put();
    obj2.put();
    rent obj3;
    obj3=operator-(obj1,obj2);
    obj3.display();
    return 0;
}