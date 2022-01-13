#include<iostream>
using namespace std;

class student
{

    public:
    int num, originalNum, remainder, result = 0;
    void logic()
    {
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    }
    
};

int main()
{
    student s1;
    s1.logic();
    return 0;
}

