#include<iostream>
#include<string>
#include<utility>
#include<algorithm>
#include<numeric>
#include<cmath>
#define ll long long

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string s;cin>>s;
		ll count=0;
		//Count all the ones.
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1')
				count++;
		}
		ll sum = (count*(count+1))/2;
		cout<<sum<<endl;
	}
}