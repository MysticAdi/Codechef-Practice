#include<algorithm>
#include<utility>
#include<iostream>
#include<string>
#include<vector>
using namespace std;



int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s = std::to_string(n);
		int temp = n;
		int len = s.length();

		vector<int> large_checker;
		while(temp!=0)
		{
			int x = temp%10;
			large_checker.push_back(x);
			temp = temp/10;
		}

		sort(large_checker.begin(),large_checker.end());

		int maxy_t = *max_element(large_checker.begin(),large_checker.end());
		int maxy = maxy_t;
		char y = (char)maxy+'0';
		for(int i=len-1;i>=0;i--)
		{
			if(s[i]==y)
			{
				s.erase(i,1);
				break;
			}
		}

		cout<<s<<endl;
	}
}