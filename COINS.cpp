#include<iostream>
#include<algorithm>
#include<utility>
#include<numeric>
#include<cmath>
#define ll long long
#include<unordered_map>

using namespace std;
unordered_map<ll,ll> umap;

ll divide(ll n)
{
	 if(n<=10)
	 {
	 	return n;
	 }

	 if(umap[n]!=0)
	 {
	 	return umap[n];
	 }

	 ll a=n/2;
	 ll b=n/3;
	 ll c=n/4;
	 umap[n] = max(n,divide(n/2)+divide(n/3)+divide(n/4)); 
	 return umap[n];
}
int main()
{
	ll n;
	while(cin>>n)
	{
		ll z= divide(n);
		cout<<z<<endl;
	}
}