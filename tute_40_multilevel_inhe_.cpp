#include<iostream>
using namespace std;

class roll
{
protected:
    int roll_number;
public:
    void set_roll(int x)
    {
        roll_number = x;
    }    
    void get_roll(void)
    {
        cout<<" the roll no is = "<<roll_number<<endl;
    }
};

class marks : public roll
{
 protected :
    float physics,maths;
 public:
    void set_marks(float m1,float m2)
    {
        physics = m1;
        maths = m2;
    }
    void get_marks(void)
    {
        cout<<"this is the marks of physics = "<<physics<<endl;
        cout<<"this is the marks of maths = "<<maths<<endl;
    }
};

class result : public marks
{
 protected :
        float persentage;
 public :
        void get_result(void)
        {   get_roll();
            get_marks();
            cout<<"the result is = "<<(physics+maths)/2<<"%"<<endl;
        }          
};

int main()
{
    result r1;
    r1.set_roll(20);
    r1.set_marks(90.0,94.0);
    r1.get_result();
    return 0;
}

