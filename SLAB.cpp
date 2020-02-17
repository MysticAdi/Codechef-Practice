#include<iostream>
#include<utility>
#include<numeric>
#include<cmath>
#include<algorithm>
#include<string>
#define ll long long

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		int tax_sum=0;

		if(n<=250000)
		{
			tax_sum = tax_sum + 0;
		}
		if(n>250000)
		{
			if(n<=500000)
			{
				tax_sum = tax_sum + (n-250000)*0.05;
			}
			else
			{
				tax_sum = tax_sum + (250000)*0.05;
			}
		}
		if(n>500000)
		{
			if(n<=750000)
			{
				tax_sum = tax_sum + (n-500000)*0.10;
			}
			else
			{
				tax_sum = tax_sum + (250000)*0.10;
			}
		}
		if(n>750000)
		{
			if(n<=1000000)
			{
				tax_sum = tax_sum + (n-750000)*0.15;
			}
			else
			{
				tax_sum = tax_sum + (250000)*0.15;
			}
		}
		if(n>1000000)
		{
			if(n<=1250000)
			{
				tax_sum = tax_sum + (n-1000000)*0.20;
			}
			else
			{
				tax_sum = tax_sum + (250000)*0.20;
			}
		}
		if(n>1250000)
		{
			if(n<=1500000)
			{
				tax_sum = tax_sum + (n-1250000)*0.25;
			}
			else
			{
				tax_sum = tax_sum + (250000)*0.25;
			}
		}
		if(n>1500000)
		{
			tax_sum = tax_sum + (n-1500000)*0.30;
		}

		int total = n - tax_sum;
		cout<<total<<endl;
	}
}