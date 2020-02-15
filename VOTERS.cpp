#include<iostream>
#include<utility>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1],b[n2],c[n3];
	unordered_map<int,int> umap;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
		umap[a[i]]++;
	}
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
		umap[b[i]]++;
	}
	for(int i=0;i<n3;i++)
	{
		cin>>c[i];
		umap[c[i]]++;
	}
	vector<int> final;
	for(auto it = umap.begin();it!=umap.end();it++)
	{
		if(it->second > 1)
		{
			final.push_back(it->first);
		}
	}
	sort(final.begin(),final.end());
	cout<<final.size()<<endl;
	for(int i=0;i<final.size();i++)
	{
		cout<<final[i]<<endl;
	}


}