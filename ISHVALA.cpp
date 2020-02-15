#include <iostream>
#include<algorithm>
#include<utility>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
		int x,y,s;cin>>x>>y>>s;
		vector<int> hor;
		vector<int> vert;

		if(x!=0)
		{
		for(int i=0;i<x;i++)
		{	
			int b;cin>>b;
			hor.push_back(b);
		}
		if(hor[x-1]!=n)
		{
			hor.push_back(n+1);
		}
	    }	

	    if(y!=0)
	    {
		for(int i=0;i<y;i++)
		{	
			int b;cin>>b;
			vert.push_back(b);
		}
		if(vert[y-1]!=m && y!=0)
		{
			vert.push_back(m+1);
		}}

		int hsize = hor.size();
		int vsize = vert.size();

		int sum_row=0;
		for(int i=0;i<hsize;i++)
		{
			if(i==0)
			{
				sum_row=sum_row + floor((hor[i]-1)/s);
			}
			else
			{
				sum_row = sum_row + floor((hor[i]-hor[i-1]-1)/s);
			}
		}

		int sum_col=0;
		for(int i=0;i<vsize;i++)
		{
			if(i==0)
			{
				sum_col=sum_col + floor((vert[i]-1)/s);
			}
			else
			{
				sum_col = sum_col + floor((vert[i]-vert[i-1]-1)/s);
			}
		}

		int sum = 0;

		if(sum_col>0 && sum_row>0)
		{
			sum = sum_row*sum_col;
		}
		else if(sum_row == 0)
		{
			sum = sum_col*(n/s);
		}
		else if(sum_col==0)
		{
			sum = sum_row*(m/s);
		}
		else if(x==0 && y==0)
		{
			sum = (n/s)*(m/s);
		}

		cout<<sum<<endl;


		
	}
}