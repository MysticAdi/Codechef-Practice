#include<iostream>
#include<utility>
#include<vector>

using namespace std;
int main()
{
vector<int> num;
int x;int flag = 0;
while(cin>>x)
{
if(x==42 && flag == 0)
{
flag = 1;
}
else if(flag==0)
{num.push_back(x);}
else
{continue;}
}

for(int i=0;i<num.size();i++)
{
	cout<<num[i]<<endl;
}

}