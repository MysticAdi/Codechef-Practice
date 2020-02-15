#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>

using namespace std;

int main()
{
	int a,n,k;
	cin>>a>>n>>k;
	int arr[k] = {0};
	while(a!=0)
	{
		for(int i=0;i<k;i++)
		{
			if(arr[i]<n)
			{
				arr[i]++;a--;break;
			}
			else if(arr[i]>=n && i!=(k-1))
			{
				arr[i]=0;
			}
			else if(arr[i]>=n && i==(k-1))
			{
				arr[i]=0;
				a--;
			}
			
		}
	}

	for(int i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}
}