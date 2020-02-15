#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,a,b,c,d,p,q,y;
		cin>>n>>a>>b>>c>>d>>p>>q>>y;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		int max_dis = arr[b-1]-arr[a-1];
		int walkcost = p*max_dis;

		int train_dist = arr[c-1] - arr[a-1];
		int train_reach = p*train_dist;

		int wait,waitcost;
		if(train_dist<y)
		{
			wait = y - train_dist;
			waitcost = wait;
		}
		else if(train_dist>y)
		{
			waitcost = -1;
		}

		int train_journey;
		int journey_cost;
		
		train_journey = abs(arr[c-1] - arr[d-1]);
		journey_cost = train_journey*q;

		int dest_to_dest = abs(arr[b-1]-arr[d-1]);
		int dest_cost = p*dest_to_dest;

		int totalwalk = walkcost;
		int totaltrain;
		if(waitcost<0)
		{totaltrain = -1;}
		else
		{
			totaltrain = train_reach + waitcost + journey_cost + dest_cost;
		} 

		if(totaltrain > totalwalk)
		{
			cout<<totalwalk<<endl;
		}
		else if(totaltrain==-1 && totaltrain<totalwalk)
		{
			cout<<totalwalk<<endl;
		}
		else{
			cout<<totaltrain<<endl;
		}

	}
}