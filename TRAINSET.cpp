#include<algorithm>
#include<iostream>
#include<utility>
#include<unordered_map>

using namespace std;
struct val{
	int zero = 0;
	int one = 0;
};
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		unordered_map<string,val> umap;
		for(int i=0;i<n;i++)
		{
			string s;cin>>s;
			int x;cin>>x;
			if(x==0)
			{
				umap[s].zero++;
			}
			else if(x==1)
			{
				umap[s].one++;
			}
		}
		int sum=0;
		for(auto it = umap.begin();it!=umap.end();it++)
		{
			sum+=std::max((it->second).zero,(it->second).one);
		}

		cout<<sum<<endl;

	}
}