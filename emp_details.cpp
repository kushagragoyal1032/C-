#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class emp
{   
    int id[20];
    string name[20];
    int i=0,saved=0;
    public:
        emp()
        {

        }
        emp(int no)
        {    
            for(i;i<no;i++)
            {   
                
                cout<<"enter the id of "<<i+1<<" employee = ";
                cin>>id[i];
                cout<<"enter the name of "<<i+1<<" employee = ";
                cin>>name[i];
            }
            cout<<"added Successfully !!"<<endl;
            
        }   
        
        emp(int no,int id_val_pass)
        {   
            int temp_id[20];
            string temp_name[20];
            for(i=0;i<no;i++)
            {
                if(id_val_pass !=id[i])
                {
                   temp_id[i] = id[i]; 
                   temp_name[i] = name[i];
                }
                else
                {
                    cout<<"ID = "<<id[i]<<" has found in system !! ";
                    cout<<endl<<"detail of id = "<<id[i]<<" delete Successfully !!";
                }
            } 
            for(i=0;i<no;i++)
            {
            id[i] = temp_id[i];
            name[i] = temp_name[i];   
            }
        }
        void display(int no)
        {   
            if(no!=0)
            {
            cout<<"details of employees  = "<<endl<<endl;
            cout<<"========================================="<<endl;
            cout<<" ID "<<setw(15)<<"NAMES"<<endl<<endl;
            cout<<"========================================="<<endl;
            for(i=0;i<no;i++)
            {
                cout<<id[i]<<setw(15)<<name[i]<<endl;
            }
            }
            else
            {
                cout<<"\tdata is empty in system!!"<<endl;
            }    
        }
};

int main()
{   
    emp obj1;    
    int count=0,id_val,user_value;
    do{
    cout<<endl<<endl<<"1. ADD EMPLOYEES "<<endl;
    cout<<"2. DELETE EMPLOYEES "<<endl;
    cout<<"3. DISPLAY EMPLOYEES "<<endl;
    cout<<"4. EXIT "<<endl;
    
    cout<<endl<<"what you want to do = ";
    cin>>user_value;
    
    
    switch(user_value)
    {

    case 1:
    cout<<"HOW MANY EMPLOYEE YOU WANT TO ADD = "<<endl;
    cin>>count;
    obj1 = emp(count);
    break;
    
    case 2:
    cout<<endl<<"enter the id of that employee which you want to delete = "<<endl;
    cin>>id_val;
    obj1 = emp(count,id_val);
    break;
    
    case 3:
    obj1.display(count);
    break;
    default:
    cout<<"wrong value !!";

    case 4:
    exit(0);
    }
    }while (user_value!=4);
    
    
    return 0;
}