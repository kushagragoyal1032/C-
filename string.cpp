#include <iostream>
#include <string>
using namespace std;

// int main() 
// {
// 	// Complete the program
//     string a, b;
//     char temp;
//     cin>>a>>b;
//     cout<<a.size()<<" "<<b.size()<<endl;
//     cout<<a+b<<endl;
    
//     temp = b[0];
//     b[0] = a[0];
//     a[0] = temp;
//     cout<<a<<endl;
//     cout<<b;
    
//     return 0;
// }





//  string parse into int sapareted by comma
/*

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseInts(string str) 
{
	// Complete this function
    
    vector<string> result;
    stringstream s_stream(str);
    
    while(s_stream.good()) 
    {
      string substr;
      getline(s_stream, substr, ','); //get first string delimited by comma
      result.push_back(substr);
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<string> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
*/






// class 

/*
class Student
{   public:
    int vage,vstandard;
    string vfirst, vlast;
    
    void set_age(int x)
    {
        vage = x;
    }
    
    void set_standard(int x)
    {
        vstandard = x;
    }
    
    void set_first_name(string x)
    {
        vfirst = x;
    }
    
    void set_last_name(string x)
    {
        vlast = x;
    }
    
    int get_age()
    {
        return vage;
    }
    
    int get_standard()
    {
        return vstandard;
    }
    
    string get_first_name()
    {
        return vfirst;
    }
    
    string get_last_name()
    {
        return vlast;
    }
    
    string to_string()
    {
        stringstream ss;
        string data;
        
        ss<<vage<<","<<vfirst<<","<<vlast<<","<<vstandard;
        ss>>data;
        return data;
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
*/





//no work

/*
class Box
{
    public:
        int l,b,h;
        Box()
        {
            l = b = h = 0;
        }
        Box(int x,int y, int z)
        {
            l = x;
            b = y;
            h = z;
        }
        Box(Box &p)
        {
            l = p.l;
            b = p.b;
            h = p.h;
        }
        
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long CalculateVolume()
    {
        return l*b*h;
    }
    
    bool operator < (Box &d)
    {
        if(l<d.l)
        {
            return true;
        }
        else if (b<d.b && l==d.l) 
        {
            return true;
        }
        else if (h<d.h && b==d.b && l==d.l) 
        {
            return true;
        }
        return false;
    }
    
    void operator << (Box &d)
    {
        cout<<d.l<<" "<<d.b<<" "<<d.h;
    }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
*/





// vector sort



/*
int n;
    cin>>n;
    vector<int>v;
    for (int i; i<n; i++) 
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    
    sort(v.begin(),v.end());
    
    for (int i; i<v.size(); i++) 
    {
        cout<<v[i]<<" ";
    }
*/





// vector erase


/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    Enter your code here. Read input from STDIN. Print output to STDOUT 
     int n;
    int a,p,q;
    cin>>n;
    vector<int>v;
    
    for (int i=0; i<n; i++) 
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    
    cin>>a;
    cin>>p>>q;
    
    v.erase(v.begin()+a-1);
    v.erase(v.begin()+p-1,v.begin()+q-1);
    
    cout<<v.size()<<endl;
    
    for (int i; i<v.size(); i++) 
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
*/



// operator overloading of <<

/*
Complex operator +(Complex &ob, Complex &ob1)
{
    Complex res;
    res.a=(ob.a+ob1.a);
    res.b=(ob.b+ob1.b);
    return res;
}

ostream& operator<<(ostream &os,Complex &o)
{
    os<<o.a<<"+i"<<o.b;
    return os;
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
*/



// sets-stl


/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    int q,x,y;  
    set<int>s;
    
    cin>>q;
    int len = s.size();
    
    while (q!=0) 
    {
        q--;
        cin>>y;
        switch (y) {
        case 1:
            cin>>x;
            s.insert(x);
            break;
        case 2:
            cin>>x;
            s.erase(x);
            break;
        case 3:
            cin>>x;
            set<int>::iterator itr=s.find(x);
            if (itr!=s.end()) {
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
            break;
    }
        }
    
    return 0;
}

*/

