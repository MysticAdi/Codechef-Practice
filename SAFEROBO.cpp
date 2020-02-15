#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int sa,sb;
		cin>>sa>>sb;

		int len = s.length();
		int a,b;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='A')
				a = i;
			if(s[i]=='B')
				b = i;
		}
		int flag = 0;
		while(1)
		{
			if(a>b) break;
			else if(a==b)
			{
				flag = 1;
				break;
			}
				a = a + sa;
				b = b - sb;
			
		}

		if(flag==0)
		{
			cout<<"Safe"<<endl;
		}
		else{
			cout<<"Unsafe"<<endl;
		}


	}
}