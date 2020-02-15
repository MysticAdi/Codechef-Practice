#include<iostream>
#include<algorithm>
#include<utility>
#include<iomanip>

using namespace std;

int main()
{
	int x;
	double y;
	cin>>x>>y;
	double ans;
	if(x%5 ==0 && (x+0.5)<=y)
	{
		ans = y -x-0.5;
	}
	else
	{
		ans = y;
	}

	cout<<fixed<<setprecision(2)<<ans;

	return 0;
	
}