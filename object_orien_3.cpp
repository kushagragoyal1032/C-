#include <iostream>
using namespace std;

class shop
{
private:
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void getprice(void);
};

void shop ::setprice(void)
{
    cout << "enter the id = " << endl;
    cin >> item_id[counter];
    cout << "enter the price = " << endl;
    cin >> item_price[counter];
    counter++;
}

void shop ::getprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "this is the item id " << item_id[i] << " with item price " << item_price[i] << endl;
    }
}

int main()
{
    shop obj1;
    obj1.initcounter();
    obj1.setprice();
    obj1.setprice();
    obj1.setprice();
    obj1.getprice();

    return 0;
}