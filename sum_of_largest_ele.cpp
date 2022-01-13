#include<iostream>
using namespace std;

int sum_of_large(int arr[], int n)
{
    int flag;
    int sum = 0;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            flag = 0;

            if(arr[i]<arr[j])  
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            sum = sum + arr[i];
        }
    }
    return sum+arr[j]; 
}

int main()
{
    int arr[10] = {52,66,64,36,45,22,32};
    int n = 7;
    cout<<"sum is = "<<sum_of_large(arr, n);

    return 0;
}