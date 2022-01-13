#include <iostream>
#include<math.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,i,j,k;
    cin>>n>>q;
    int arr[n][20];
    int query_arr1[12],query_arr2[12];
    
    for(i=0;i<n;i++)
    {
        cin>>k;
        for(j=0;j<k;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(i=0;i<q;i++)
    {
        cin>>query_arr1[i]>>query_arr2[i];
    }
    
    for(i=0;i<q;i++)
    {    
        int m = query_arr1[i];
        int n = query_arr2[i];
        cout<<arr[m][n]<<endl;
    }
    

    return 0;
}