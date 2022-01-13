// #include <iostream>
// using namespace std;

// int main()
// {

// int no,m,data,flag,i,j,k;
// 	int arr[10];
	
// 	cin>>no;
// 	for(i=0;i<no;i++)
// 	{
// 		cin>>arr[i];
// 	}

// 	for(k=0;k<no;k++)
// 	{
// 		m = arr[k]/2;
//         flag=0;
// 		for(j=2;j<=m;j++)
// 		{
// 			if(arr[k]%j==0)
// 			{
// 				flag = 1;
// 				cout<<"no"<<endl;
// 				break;
// 			}
// 		}
// 		if(flag==0)
// 		{
// 			cout<<"yes"<<endl;
// 		}

// 	}

// return 0;
// }






// #include <iostream>
// using namespace std;

// int main()
// {

// int n,number;
// int sum;
// cin>>n>>number;
// sum = n*6;
// if(sum>number)
// {
//     cout<<"YES"<<endl;
// }
// else
// {
//     cout<<"NO"<<endl;
// }

//     return 0;
// }






// void fizzbuzz (int N)
// {
// //Enter your code here
// 	for(int i=1;i<=N;i++)
// 	{
// 		if(i%3==0 && i%5==0)
// 		{
// 			cout<<"FizzBuzz"<<" ";
// 		}
// 		else if(i%3==0)
// 		{
// 			cout<<"Fizz"<<" ";
// 		}
// 		else if(i%5==0)
// 		{
// 			cout<<"Buzz"<<" ";
// 		}
		
// 		else
// 		{
// 			cout<<i<<" ";
// 		}
// 	}
// }







// compound interest


// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;

// int main() {

// 	// Your code here
//        double P,R,T,CI,result;
//        cin>>P;
//        cin>>R;
//        cin>>T;
	
//        CI = P*(pow((1+R/100),T));
//        result = CI-P;
//        cout<< fixed << setprecision(2) <<result;
//        return 0;
// 	return 0;
// }





// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;


// int main()
// {

// int file_size, speed;
// int time;
// cin>>file_size>>speed;
// time = file_size/(speed/8);
// cout<<time;
// return 0;
// }



// SPD


// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;

// int main() 
// {

// 	// Your code here
// 	int i,j,sum=0;
// 	int flag;
// 	int arr[5];

// 	for(i=0;i<5;i++)
// 	{
// 		cin>>arr[i];
// 	}

// 	for(i=0;i<5;i++)
// 	{
// 		flag = 0;
//         sum=0;
// 		for(j=0;j<5;j++)
// 		{
// 			if(j==i)
// 			{
// 				continue;
// 			}
// 			else
// 			{
// 				sum = sum + arr[j];
// 			}
// 		}
// 			if(arr[i] >= sum)
// 			{
// 				flag = 1;
// 				break;
// 			}
// 	}
// 	if(flag == 1)
// 	{
// 		cout<<"SPD Emergency";
// 	}
// 	else
// 	{
// 		cout<<"stable";
// 	}

// 	return 0;
// }






//GCD





#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int a,b;
	int gcd;
	cin>>a>>b;

	if(a==0)
	{
		gcd = b;
	}
	else if(b==0)
	{
		gcd = a;
	}
	else
	{

	for(int i=1; i<=a && i<=b; i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd = i;
		}
	}
	}
	cout<<gcd;
	return 0;
}










// DSA



//prime


// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;

// int main()
// {

// int no,m,data,flag,j,k,c=0;

// 	cin>>no;

// 	for(k=2;k<=no;k++)
// 	{
// 		// m = k/2;  
//         flag=0;
// 		for(j=2;j<=sqrt(k);j++) 
// 		{
// 			if(k%j==0) 
// 			{
// 				flag = 1;
// 				// cout<<"No"<<endl;
// 				break;
// 			}
// 		}
// 		if(flag==0)
// 		{
// 			// cout<<"Yes"<<endl;
//             c++;
//         }
// 	}
//     cout<<c;
// return 0;
// }





// calculator


// static int calculator(char ch, int a, int b)
//     {
//          // your code here
//          if(ch == '+')
//          {
//          return (a+b);
//          }
//          else if(ch == '-')
//          {
//          return (a-b);
//          }
//          if(ch == '*')
//          {
//          return (a*b);
//          }
//          else{
//              double result = a/b;
//              int f_result = (int) Math.floor(result);
//              return f_result;
//          }
//      }




// main pattern code



// public static void pattern_making(int n){
//     for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         System.out.print(j+" ");
//     }
//     for(int j=i-1;j>=1;j--){
        
//         System.out.print(j+" ");
//     }
//         System.out.println(" ");
// }

// for(int i=n-1;i>=1;i--){
//     for(int j=1;j<=i;j++){
        
//         System.out.print(j+" ");
//     }
//     for(int j=i-1;j>=1;j--){
        
//         System.out.print(j+" ");
//     }
    
//         System.out.println();
// }
// }




