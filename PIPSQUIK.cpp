#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int h,n,y1,y2,l;
		int pass=0;
		cin>>n>>h>>y1>>y2>>l;
		int t[n];int x[n];
		for(int i=0;i<n;i++)
		{
			int tt;cin>>tt;
			int xx;cin>>xx;
			t[i] = tt; x[i]=xx;
		}
		
		int y11 = h - y1;

    	for(int i=0;i<n;i++)
    	{
    		if(t[i]==1)
    		{
    			if(y11<=x[i])
    			{
    				pass++;
    			}
    			else
    			{
    				l=l-1;
    				if(l==0)
    				{
    					break;
    				}
    				else{pass++;}
    			}
    		}
    		else if(t[i]==2)
    		{
    			if(y2>=x[i])
    			{
    				pass++;
    			}
    			else
    			{
    				l=l-1;
    				if(l==0)
    				{
    					break;
    				}
    				else{pass++;}
    			}
    		}

    	}

    	cout<<pass<<endl;


	}
}