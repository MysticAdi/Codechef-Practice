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
		float finish,distancetobolt,tigeracc,boltspeed;
		cin>>finish>>distancetobolt>>tigeracc>>boltspeed;

		float time_bolt = finish/boltspeed;
		float time_tiger = sqrt((2*(distancetobolt+finish))/tigeracc);

		if(time_bolt<time_tiger)
		{
			cout<<"Bolt"<<endl;
		}
		else
		{
			cout<<"Tiger"<<endl;
		}
	}
}