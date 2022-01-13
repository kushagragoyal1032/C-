#include<iostream>
using namespace std;

class shopping 
{
    int mobile,powerbank;
    char ch,ch1;
    int m_flag=0;
    int p_flag=0;
    int total=0;
    int count=0;
    public:
        void get_m()
        {   cout<<"mobile price is  = 15000/- "<<endl;
            cout<<"are you want to buy a mobile?"<<endl;
            cout<<"PRESS : y/n "<<endl;
            cin>>ch;
            if(ch=='y'||ch=='Y')
            {   m_flag = 1;
                count++;
                cout<<count<<" item has selected "<<endl;
                cout<<"mobile has added in your cart"<<endl<<endl;
            }
            else if(ch=='n'||ch=='N')
            {   m_flag = 0;
                cout<<"nothing has added in your cart"<<endl<<endl;
            }
            else
            {
                cout<<"you gave wrong value"<<endl<<endl;                
            }
            
        }
         void get_p()
        {    cout<<"powerbank price is  = 1000/- "<<endl;
            cout<<"are you want to buy a powerbank?"<<endl;
            cout<<"PRESS : y/n ";
            cin>>ch1;
            if(ch1=='y'||ch1=='Y')
            {   p_flag = 1;
                count++;
                cout<<count<<" item has selected"<<endl;
                cout<<"powerbank has added in your cart"<<endl<<endl;
            }
            else if(ch1=='n'||ch1=='N')
            {   p_flag = 0;
                cout<<"nothing has added in your cart "<<endl<<endl;
            }
            else
            {
                cout<<"you gave wrong value"<<endl<<endl;                
            }
        }
       void operator *()
       {
           if(m_flag == 1 && p_flag == 0)
           {    
               mobile = (15000*5)/100;  
               
               total = 15000-mobile;
               cout<<endl<<"you bought only mobile so you got 5% discount "<<endl;
               cout<<"mobile price = 15000/- "<<endl<<"final price with 5% discount = "<<total<<"/-"<<endl<<endl;
               by();
           }
           else if(m_flag == 0 && p_flag == 1)
           {
                
                powerbank = (1000*10)/100;
                total = 1000-powerbank;
                cout<<endl<<"you bought only powerbank so you got 5% discount "<<endl;
                cout<<endl<<"powerbank price = 1000/- "<<endl<<"final price with 5% discount = "<<total<<"/-"<<endl<<endl;
                by();
           }
            else if(m_flag == 1 && p_flag == 1)
           {
                mobile = (15000*10)/100;
                powerbank = (1000*10)/100;
                total = 16000-(mobile + powerbank);
                cout<<endl<<"you baught both product so you got 10% discount "<<endl;
                cout<<"mobile price = 15000 "<<endl<<"powerbank price = 1000/- "<<endl<<"total price without discount = 16000/-"<<endl<<"final price with 5% discount = "<<total<<"/-"<<endl<<endl;
                by();
           }
           else
           {
               cout<<"you haven't select anything "<<endl<<endl;
               by();
              
           }
           
       }
       void by()
       {    cout<<"\t\t\tCONGRATULATION :) for your new device"<<endl;
            cout<<"\n\n\t\t\t\t\t***THANK YOU FOR VISIT*** "<<endl;
       }
};

void intro()
{
    cout<<"\n\n\n\n\t\t\t\t**==**==**WELCOME TO THE SHOPPING MALL**==**==**"<<endl<<endl;
    cout<<endl<<"\t\t\t\t\twe have a grate discount for you !!!!"<<endl<<endl<<endl;
    cout<<"\t\tif you purchare mobile along with powerbank you will get 10 persentage discount !!!!"<<endl;
    cout<<endl<<endl<<"\t\tif you purchase mobile or powerbank you will get 5 persentage discount !!!!"<<endl<<endl;
}
int main()
{
    shopping obj;
    intro();
    obj.get_m();
    obj.get_p();
    *obj;
    return 0;
}