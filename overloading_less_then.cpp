#include <iostream>

using namespace std;

class Distance {
private:
int feet; //data members
int inches;

public:

Distance() {
feet = 0;
inches = 0;
}
Distance(int f, int i) {
feet = f; //feet=5
inches = i;//inches=11
}


void displayDistance() {
cout << "F: " << feet << " I:" << inches <<endl;
}


bool operator <(Distance &d)
{
if(feet < d.feet) { //11<5
return true;
}
if(feet == d.feet && inches < d.inches) { //11==5 && 10<11
return true;
}

return false;
}
};

int main() {
Distance D1(11, 10), D2(5, 11);

if( D1.operator<(D2) ) //if(false)
{
cout << "D1 is less than D2 " << endl;
}
else
{
cout << "D2 is less than D1 " << endl;
}

return 0;
}