#include<iostream>
using namespace std;

class arm
{
    private:
    int num, ans=0,rem,value;
    friend void frnd_logic(arm);
    public:
    void getdata()
    {
    cout<<"enter the number = ";
    cin>>num;
    value=num;
    }
};
                                                    //2
void frnd_logic(arm op)
{
    while(op.value>0)
    {
    op.rem=op.value%10;
    op.ans = op.ans+ (op.rem*op.rem*op.rem);
    op.value= op.value/10;
    }

    if(op.ans == op.num)
    {
        cout<<"the value given by you is the armstrong";                    //3
    }
    else
    {
        cout<<"the value is NOT the armstrong";
    }
}

int main()
{
    arm obj; 
    obj.getdata();
    frnd_logic(obj);

return 0;
}