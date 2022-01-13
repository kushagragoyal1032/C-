#include<iostream>
using namespace std;

class mouse
{
    int a;
    public:
        static int count;
        void get()
        {
            cout<<"enter the age of 1st student = ";
            cin>>a;
            //count++;
        }
        static void coun()
        {
             cout<<"total no of student = "<<++count<<endl;
        }
        void put()
        {
            cout<<"this is the age of student = " <<a<<endl;
        }
};

int mouse :: count;
 
int main()
{
mouse obj,obj1,obj3;
obj.get();
obj.put();
mouse::coun();

obj1.get();
obj.put();
mouse::coun();

obj3.get();
obj.put();
mouse::coun();

return 0;


}