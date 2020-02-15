#include <iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		//std::ios::sync_with_stdio(false);
		//cin.tie(NULL);

		int n;cin>>n;
		int cars[n]={0};

		for(int i=0;i<n;i++)
		{
			cin>>cars[i];
		}

		int min=cars[0];
		int count = 1;

		for(int i=1;i<n;i++)
		{
			if(cars[i]<=min)
			{
				min = cars[i];
				count++;
			}
			else{
				cars[i] = min;
			}
		}

		cout<<count<<endl;
	}
}