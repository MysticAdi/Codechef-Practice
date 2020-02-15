#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		sort(a,a+n);

		int min1=a[1]-a[0];
		int min;
		for(int i=1;i<n;i++)
		{
			min = a[i]-a[i-1];
			if(min1>=min)
			{
				min1 = min;
			}
		}

		cout<<min1<<endl;

	}
}