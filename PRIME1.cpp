#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

void primer(int a ,int b)
{
	int flag=1;
	for(int i=a;i<=b;i++)
	{
		if(i==1 || i==0)
			continue;

		flag = 1;

		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}

		if(flag==1)
			cout<<i<<endl;

	}
	cout<<endl;
	return;
}

int main()
{
	int t;cin>>t;
	//isprime();
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		primer(a,b);
	}
}