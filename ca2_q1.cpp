#include<iostream>
using namespace std;

class studetails
{   public:
    string a;
    int b;
        studetails(string x,int y)
        {
            a=x;
            b=y;
        }
         studetails(studetails &op)
        {
            a = op.a;
            b = op.b;
        }
        void put()
        {
            cout<<"this is the name = "<<a<<endl;
            cout<<"this is the roll no  ="<<b<<endl;
        }
};
int main()
{
    studetails obj("ram",101);
    obj.put();
    studetails obj1(obj);
    obj1.put();
    return 0;   
}