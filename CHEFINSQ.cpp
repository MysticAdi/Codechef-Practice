#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;
long long dp[50][50] = {0};

bool comp(int a,int b)
{
	return(a<b);
}

void my_dp_initialise()
{
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[0][2] = 0;
	for(int i=1;i<51;i++)
	{
		dp[i][0] = 1;
		for(int j=1;j<51;j++)
		{
			dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;int a[n];int x;int freq_2=0;int freq_1=0;
		cin>>n>>k;
		my_dp_initialise();
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		sort(a,a+n);
		int *l1=std::max_element(a,a+k,comp);
		x = (int)*l1;

		for(int i=0;i<k;i++)
		{
			if(a[i]==x)
			{
				freq_1++;
			}
		}

		for(int i=k;i<n;i++)
		{
			if(a[i]==x)
			{
				freq_2++;
			}
			else{
				break;
			}
		}

		if(k>n)
		{
			cout<<"0"<<endl;
		}
		else if(freq_1 == 1 && freq_2==0)
		{
			cout<<"1";
		}
		else if(freq_1==1 && freq_2>0)
		{
			cout<<freq_2+1;
		}
		else if(freq_1>1 && freq_2>0)
		{
			cout<<dp[freq_2][freq_1]+1;
		}

	}
}