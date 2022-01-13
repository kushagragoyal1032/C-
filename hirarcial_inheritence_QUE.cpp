#include<iostream>
using namespace std;

class basic_info
{
    protected:
        char name[30];
        int empid;
        char gender;
    public:
        void getBasicInfo();
        void putBasicInfo();
};

void basic_info::getBasicInfo()
{
    cout<<"name = ";
    cin>>name;
    cout<<"empid = ";
    cin>>empid;
    cout<<"gender = ";
    cin>>gender;
}

void basic_info::putBasicInfo()
{
    cout<<"name = "<<name<<endl;
    cout<<"id = "<<empid<<endl;
    cout<<"gender = "<<gender<<endl;
}

class dept_info : public basic_info
{
    protected:
        protected:
        char dept_name[30];
        int deptid;
    public:
        void getDeptInfo();
        void putDeptInfo();
};

void dept_info::getDeptInfo()
{
    cout<<"dept name = ";
    cin>>dept_name;
    cout<<"dept id = ";
    cin>>deptid;
}

void dept_info::putDeptInfo()
{
    cout<<"dept name = "<<dept_name<<endl;
    cout<<"dept id = "<<deptid<<endl;
}


class loan_info : public basic_info
{
    protected:
        protected:
        char loan_name[30];
        int loan_amount;
    public:
        void getLoanInfo();
        void putLoanInfo();
};

void loan_info::getLoanInfo()
{
    cout<<"loan name = ";
    cin>>loan_name;
    cout<<"laon amount = ";
    cin>>loan_amount;
}

void loan_info::putLoanInfo()
{
    cout<<"loan name = "<<loan_name<<endl;
    cout<<"loan amount = "<<loan_amount<<endl;
}

int main()
{
    dept_info dept_obj;
    loan_info loan_obj;

    dept_obj.getDeptInfo();
    dept_obj.putDeptInfo();

    dept_obj.getBasicInfo();
    dept_obj.putBasicInfo();


    loan_obj.getLoanInfo();
    loan_obj.putLoanInfo();

    loan_obj.getBasicInfo();
    loan_obj.putBasicInfo();

    return 0;
}
