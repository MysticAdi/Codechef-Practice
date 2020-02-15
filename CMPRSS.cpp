#include<iostream>
#include<algorithm>
#include<utility>
#include<string>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		string s="";
		int i=0;
		while(i<n)
		{
			int initial = a[i];
			int count=0;
			while(a[i+1] == a[i]+1)
			{
				count++;
				i = i + 1;
			}

			if(count==0 && i!=(n-1))
			{
				s=s+std::to_string(initial)+",";
			}
			else if(count==0 && i==(n-1))
			{
				s=s+std::to_string(initial);
			}
			else if(count==1 && i!=(n-1))
			{
				s=s+std::to_string(initial)+","+std::to_string(a[i])+",";
			}
			else if(count==1 && i==(n-1))
			{
				s=s+std::to_string(initial)+","+std::to_string(a[i]);
			}
			else if(count>1 && i!=(n-1))
			{
				s=s+std::to_string(initial)+"..."+std::to_string(a[i])+",";
			}
			else if(count>1 && i==(n-1))
			{
				s=s+std::to_string(initial)+"..."+std::to_string(a[i]);
			}

			i=i+1;
		}

		cout<<s<<endl;
	}
}