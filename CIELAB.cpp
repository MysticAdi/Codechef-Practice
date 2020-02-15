#include<iostream>
#include<utility>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int a,b;
	int c = a-b;

	string s = std::to_string(c);
	int n = s.length();

		if(n==1 && s[0]!='9')
		{
			s[0]=s[0]+1;
		}
		else if(n==1 && s[0]=='9')
		{
			s[0]='2';
		}
		else if(n>1 && s[0]!='9')
		{
			s[0] = s[0]+1;
		}
		else if(n>1 && s[0]=='9')
		{
			s[0] = '2';
		}

	cout<<s<<endl;

}