#include<iostream>
#include<algorithm>
#include<utility>
#include<math.h>
#include<numeric>
#define ll long long

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		sort(a,a+n);
		
		int min = a[0];
		cout<<(sum-(n*min))<<endl;

	}

}