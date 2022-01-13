//newton 

int exist(int no)
{
    int last_v,flag_both = 0;
    bool flag_7=0, flag_9=0;

    while(no>0)
    {
    last_v = no%10;
    no = no/10;

    if (last_v==7)
    {
        flag_7 = 1;
    }
    if(last_v==9)
    {
        flag_9 = 1;
    }
    } // while closed

    if(flag_7==1 && flag_9==1)
    {
         return flag_both = 1;
    }

return flag_both = 0;

}


int MagicNumber(int N)
{

int val,last_v,temp1,temp2,both_exist,ans;
//Enter your code here
temp1 = N;
temp2 = N;

while(1)
{ 
    both_exist = exist(temp1);
    if(both_exist==1)
    {
        ans = temp1;
        //cout<<temp1<<endl;
        break;
    }
    else
    {
        temp1--;
    }

    both_exist = exist(temp2);
    if(both_exist==1)
    {
        ans = temp2;
        break;
    }
    else
    {
        temp2++;
    }
}

return ans;
}