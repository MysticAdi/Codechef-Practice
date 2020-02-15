#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum1,sum2,n,k,x,i;
    cin>>t;
    while(t--)
    {
        sum1=0;
        sum2=0;
        cin>>n>>k;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        x=min(k,n-k);
        sort(a,a+n);
        for(i=0;i<x;i++)
        {
            sum1=sum1+a[i];
        }
        for(i=x;i<n;i++)
        {
            sum2=sum2+a[i];
        }
        
        cout<<abs(sum2-sum1)<<endl;
    }
}