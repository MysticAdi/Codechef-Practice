#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<iomanip>
#include<numeric>

using namespace std;
 

int main()
{
	int a[4] = {1,2,3,4};
	//int sum =0;
	int sum = accumulate(a,a+4,sum);
	cout<<sum<<endl;

}