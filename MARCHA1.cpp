#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

bool isset(int a[],int n,int sum)
{
	if(sum==0)
		return true;

	if(n==0 && sum>n)
		return false;

	if(a[n-1]>sum)
		return isset(a,n-1,sum);

	return isset(a,n-1,sum) || isset(a,n-1,sum-a[n-1]);
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		bool f=isset(a,n,m);

		if(f==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

	}
}