#include<iostream>
using namespace std;

class student
{
 protected:
    int roll_no;
 public:
    void set_roll(int a)
    {
        roll_no=a;
    }    
    void get_roll(void)
    {
        cout<<"the roll no is = "<<roll_no<<endl;
    }
};

class test : public virtual student
{
    protected:
        int physics,maths;
    public:
        void set_test(int m1,int m2)
        {
            physics= m1;
            maths= m2;
        }    
        void get_test(void)
        {
            cout<<"your result is = "<<endl
                <<" your marks in physics = "<<physics<<endl
                <<" your makrs in maths = "<<maths<<endl;
        }
};

class sports : public virtual student
{
    protected :
        int cricket;
    public:
        void set_sport(int x)
        {
            cricket = x;
        }    
        void get_sport(void)
        {
            cout<<"your marks in cricket = "<<cricket<<endl;
        }
};

class result : public test,public sports
{   int total;
    public:
        void print(void)
        {    
             get_roll();
             get_test();
             get_sport();
            cout<<"and your total marks = "<<physics+maths+cricket;
            
        } 
};


int main()
{
    result kk;
    kk.set_roll(20);
    kk.set_test(43,65);
    kk.set_sport(87);
    kk.print();
    return 0 ;
}
