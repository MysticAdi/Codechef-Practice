#include<iostream>
#include<cmath>
#include<utility>
#include<unordered_map>
#include<algorithm>
#define ll long long

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s,j;
		cin>>j>>s;

		unordered_map<char,int> umap;

		for(int i=0;i<j.length();i++)
		{
			umap[j[i]]++;
		}
		int count =0;
		for(int i=0;i<s.length();i++)
		{
			if(umap[s[i]] != 0)
			{
				count++;
			}
		}

		cout<<count<<endl;



	}
}