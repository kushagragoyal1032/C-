#include<iostream>
using namespace std;

class base
{
    public:
     int base_class;
      virtual void print(void)          //virtual function
      {
          cout<<"1 display the base_class variable "<<base_class<<endl;
      }
};

class derieved : public base
{
   public:
    int derieved_class=3;
    void print(void)
    {
          cout<<"2 display the base_class variable "<<base_class<<endl;
            cout<<"2 display the derieved_class variable "<<derieved_class<<endl;
    }
};

int main()
{
    base *base_pointer;
    base obj_base;
    derieved obj_deriened;
    base_pointer = &obj_deriened;

    base_pointer->base_class = 65;
    //base_pointer->derieved_class = 43; //throw a error
    base_pointer->print();

    //derieved *derieved_pointer;
    //derieved_pointer = &obj_deriened;

    //derieved_pointer->derieved_class = 54;
    //derieved_pointer->print();



    return 0;
    

}


