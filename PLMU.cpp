#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		int count0=0;int count2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			{
				count0++;
			}
			if(a[i]==2)
			{
				count2++;
			}

		}

		int total0 = (count0*(count0-1))/2;
		int total2 = (count2*(count2-1))/2;

		int total = total2+total0;
		cout<<total<<endl;

	}
}