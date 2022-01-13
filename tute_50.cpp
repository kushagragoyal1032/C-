#include<iostream>
using namespace std;

int main()
{
int *arr = new int[3];
arr[0] = 10;
*(arr+1) = 20;

cout<<"the value of arr[0] = "<<arr[0]<<endl;
cout<<"the value of arr[1] = "<<*(arr+1)<<endl;
return 0;
}