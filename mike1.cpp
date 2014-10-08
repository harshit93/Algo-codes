#include<iostream>
using namespace std;

typedef unsigned long long LL;
#define MAX(a,b) ((a)>(b)?(a):(b))

main()
{
	LL n,m;
	cin>>n>>m;
	LL arr[n+5][m+5];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>arr[i][j];
	}
	LL l;
	cin>>l;
	int arr1[l][2];
	LL sum1=0,sum2=0;
	int ans1=0,ans2=0;
	for(int i=0;i<l;i++)
	{
		cin>>arr1[i][0]>>arr1[i][1];
		if(arr1[i][0]<=n && arr1[i][1]<=m)
			sum1+=arr[arr1[i][0]][arr1[i][1]];
		else
			ans1=-1;
		if(arr1[i][0]<=m && arr1[i][1]<=n)
			sum2+=arr[arr1[i][1]][arr1[i][0]];
		else
			ans2=-1;
	}
	if(ans1==0 && ans2==0)
		cout<<MAX(sum1,sum2)<<endl;
	else if(ans1==-1 && ans2==0)
		cout<<sum2<<endl;
	else if(ans2==-1 && ans1==0)
		cout<<sum1<<endl;
	else
		cout<<"-1"<<endl;

}