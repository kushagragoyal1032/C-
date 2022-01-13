#include<iostream>
using namespace std;

class shop_item
{
    int id;
    int price;
    public:
        void set_item(int a,int b)
        {
            id = a;
            price = b;
        }
        void get_item(void)
        {   
            cout<<"the id is = "<<id<<endl;
            cout<<"the price is  = "<<price<<endl;
        }
};

int main()
{  int size = 3;
   int i,p,q; 
    shop_item *ptr = new shop_item[size];
    shop_item *ptr_temp = ptr;

    for(i=0;i<size;i++)
    {
        cout<<"enter the id and price of item "<<"'"<<i+1<<"'"<<endl;
        cin>>p>>q;
        ptr->set_item(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"so the item list is = "<<endl<<endl;
        ptr_temp->get_item();
        ptr_temp++;
    }
    return 0;    
}