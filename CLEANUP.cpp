#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+1];
		a[0] = 0;
		for(int i=1;i<n+1;i++)
		{
			a[i] = i;
		}

		for(int i=0;i<m;i++)
		{
			int x;cin>>x;
			a[x] = -1;
		}

		vector<int> chef;
		vector<int> ass;

		int c_flag = 1; int c_count=0;
		int a_flag = 0; int a_count=0;

		for(int i=1;i<n+1;i++)
		{
			if(a[i]!=-1)
			{
				if(c_flag == 1)
				{
					c_count++;
					c_flag=0;a_flag=1;
					chef.push_back(a[i]);
				}
				else if(a_flag==1)
				{
					a_count++;
					c_flag=1;a_flag=0;
					ass.push_back(a[i]);
				}
			}
		}

		sort(chef.begin(),chef.end());
		sort(ass.begin(),ass.end());

		if(c_count>0)
		{
			for(int i=0;i<chef.size();i++)
			{
				cout<<chef[i]<<" ";
			}
		}
		else
		{
			cout<<" ";
		}

		cout<<endl;

		if(a_count>0)
		{
			for(int i=0;i<ass.size();i++)
			{
				cout<<ass[i]<<" ";
			}
		}
		else
		{
			cout<<" ";
		}

		cout<<endl;
	}
}