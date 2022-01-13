#include<iostream>
using namespace std;


long long equationSum(long long N)
 {
//Enter your code here
int ans=0;
int x=1;
while(N>=1)
{
 ans = (ans + (((x+1)*(x+1)) - ((3*x)+1) + (x)));
 N--;
 x++;
}
return ans;
}

 
 
int main()
{
  
    int N;
    cin>>N;
   
   cout<<equationSum(N);
    return 0;
}