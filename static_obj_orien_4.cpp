#include <iostream>
using namespace std;

class test
{
    int no;
    static int count;

public:
    void get(int);
    void put(void);
};

void test ::get(int x)
{
    no = x;
    cout << "no is  = " << no<<endl;
    count++;
}

void test ::put()
{
    cout << "counter is = " << count<<endl;
}

int test ::count;

int main()
{
    test t1, t2, t3;
    t1.put();
    t2.put();
    t3.put();
    t1.get(100);
    t2.get(200);
    t3.get(300);
    t1.put();
    t2.put();
    t3.put();
    return 0;
}
