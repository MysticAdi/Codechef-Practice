#include <iostream>
#include <algorithm>
#include <utility>
#include <math.h>

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

		int local_inv = 0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				local_inv++;
			}
		}

		int global_inv = 0;
		
		for(int i=0;i<n-1;i++)
		{
		    for(int j=i+1;j<n;j++)
		    {
			if(a[i]>a[j])
			{
				global_inv++;
			}
		    }
		}

		if(global_inv==local_inv)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}