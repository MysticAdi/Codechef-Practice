#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int x = 5;
		int i = 1;
		long long int sum = 0;
		while(n>x)
		{
			sum = sum + floor(n/x);
			x = pow(5,i+1);
			i++;

		}

		cout<<sum<<endl;
	}
}