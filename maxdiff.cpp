#include<iostream>
#include<algorithm>
using namespace std;
unsigned long long LL;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n,k;
		cin>>n>>k;
		LL arr[n][2];
		arr[0][1]=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i][0];
			arr[i][1]=arr[i-1][1]+arr[i][0];
		}
		sort(arr,arr+n);


	}	
}