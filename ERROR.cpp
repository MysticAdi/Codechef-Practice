#include<iostream>
#include<algorithm>
#include<math.h>
#include<utility>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;
		int n = s.length();
		cin>>s;
		string g1 = "010";
		string g2 = "101";
		int found = s.find(g1);
		int found2 = s.find(g2);
		if(found>=0 || found2>=0)
            cout <<"Good"<<endl;
        else
            cout<<"Bad"<<endl;

	}
}