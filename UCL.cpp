#include<iostream>
#include<algorithm>
#include<utility>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

struct team{
	int points = 0;
	int goal_diff=0;
};

bool mysort(const pair<string,team> &a,const pair<string,team> &b)
{
	if(a.second.points > b.second.points)
		return true;
	else if(a.second.points < b.second.points)
		return false;
	else
	{
		if(a.second.goal_diff>b.second.goal_diff)
		{
			return true;
		}
		else
			{return false;}
	}
}

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n = 12;
		unordered_map<string,team> umap;
		for(int i = 0;i<n;i++)
		{
			string t1,t2;
			int g1,g2;
			string vs;
			cin>>t1;
			cin>>g1; cin>>vs;cin>>g2;cin>>t2;

			if(g1>g2)
			{
				umap[t1].points += 3;
			}
			else if(g2>g1)
			{
				umap[t2].points += 3;
			}
			else{
				umap[t1].points++;
				umap[t2].points++;
			}

			umap[t1].goal_diff += g1-g2;
			umap[t2].goal_diff += g2-g1;

	}

	vector<pair<string,team>> teams;

	for(auto it = umap.begin();it!=umap.end();it++)
	{
		teams.push_back(make_pair(it->first,it->second));
	}

	sort(teams.begin(),teams.end(),mysort);

	cout<<teams[0].first<<" "<<teams[1].first<<endl;


}
}