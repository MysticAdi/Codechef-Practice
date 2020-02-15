#include<iostream>
#include<algorithm>
#include<utility>
#include<cmath>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int g;cin>>g;
		while(g--)
		{
			int i,n,q;
			cin>>i>>n>>q;
			int ans;
			int ansh,anst;
			if(n%2 == 0)
			{
				ans = n/2;
			}
			else if(n%2!=0 && i==1)
			{
				ansh = floor(n/2);
				anst = n - ansh; 
			}
			else if(n%2!=0 && i==2)
			{
				anst = floor(n/2);
				ansh = n - anst;
			}

			if(q==1 && n%2!=0)
			{
				ans = ansh;
				cout<<ans<<endl;
			}
			else if(q==2 && n%2!=0)
			{
				ans = anst;
				cout<<ans<<endl;
			}
			else
			{
				cout<<ans<<endl;
			}
		}
	}
}