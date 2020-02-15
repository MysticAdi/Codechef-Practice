#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;

		int pages_needed = x-y;

		int page[n];
		int cost[n];

		for(int i=0;i<n;i++)
		{
			cin>>page[i]>>cost[i];
		}
		int flag=0;

		for(int i=0;i<n;i++)
		{
			if(page[i]>=pages_needed)
			{
				if(cost[i]<=k)
				{
					cout<<"I am here"<<endl;
					flag==1;
					break;
				}
			}
		}

		if(flag==1)
			cout<<"LuckyChef"<<endl;
		else
			cout<<"UnluckyChef"<<endl;
	}
}