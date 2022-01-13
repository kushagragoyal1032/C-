#include<iostream>

#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h> // for setw

using namespace std;

class vending
{

    public:
        char product_name[40];
        int product_price;
        int product_quantity;

        void show_product()  
        {
            cout<<"product name = "<<product_name;
            cout<<"product price = "<<product_price;
            cout<<"product quantity = "<<product_quantity;
            cout<<endl<<endl;
        } 

        void add_products()         // for onwer
        {
            cout<<"which product u want to add = ";
            gets(product_name);
            cout<<"what is the price of "<<product_name<<" = ";
            cin>>product_price;
            cout<<"how many "<<product_name<<" you are adding = ";
            cin>>product_quantity;
        }

        void purchase_product()     // for customer
        {
            cout<<"which product u want to purchase = ";
            gets(product_name);
            cout<<"how many "<<product_name<<" you want to purchase = ";
            cin>>product_quantity;
        }

        void print_all()  // for both
        {
            cout<<product_name<<setw(30)<<product_price<<setw(30)<<product_quantity<<endl;
        }

};

fstream fp, fp1;
vending obj_vm;

//********************************************************

void write_products()          // for owner to add items in machine
{
    char ch;
    fp.open("Products.dat",ios::out|ios::app);
    do
    {
        clrscr();
        obj_vm.add_products();
        fp.write((char*)&obj_vm,sizeof(vending));
        cout<<"\n\nDo you want to add more record..(y/n?)";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    fp.close();
}

//***************************************************************
//        function to read All record from file
//****************************************************************


void display_all()  // for both
{
    clrscr();
        obj_vm.open("Product.dat",ios::in);
        if(!obj_vm)
        {
            cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
            getch();
            return;
        }
    
    cout<<"\n\n\t\tPRODUCT LIST\n\n";
    cout<<"==================================================================\n";
    cout<<"\t Product Name"<<setw(10)<<"Price"<<setw(20)<<"Quantity\n";
    cout<<"==================================================================\n";

    while(fp.read((char*)&obj_vm,sizeof(vending)))
    {
        obj_vm.print_all()
    }

    fp.close();
    getch();
}





//------------------------------------------------------------------------

void main()
{
    
}