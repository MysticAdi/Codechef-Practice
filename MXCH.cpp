#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			a[i]=i+1;
		}

		int num = a[n-1-k];
		int i=0;
		a[n-1-k]=a[i];
		a[i]=num;

		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}