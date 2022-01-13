#include<iostream>
using namespace std;

class binary
{
    private :
    string s;
    public:
     void get(void);
     void check_b(void);
     void ones_comp(void);
     void display(void);
};

void binary :: get(void)
{
    cout<<"enter the string = "<<endl;
    cin>>s;
}

void binary :: check_b(void)
{
    for (int i=0;i< s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"this is not binary";
            exit(0);
        }
        
    }
}

void binary :: ones_comp(void)
{
    for (int i=0;i< s.length();i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
        
    }
}

void binary :: display(void)
{
    cout<<endl<<"your binary no = ";
    for (int i=0;i< s.length();i++)
    {
        cout<<s.at(i);
    }
}


int main()
{
    binary obj1;
    obj1.get();
    obj1.check_b();
    obj1.display();
    obj1.ones_comp();
    obj1.display();
    return 0;
}
