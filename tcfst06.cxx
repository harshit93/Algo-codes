#include<iostream>
using namespace std;

main()
{
	int n;
	int count=0;
	int pflag=0;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
			count++;
		if(i==0 && arr[i]>0)
			count++;
		if(arr[i]>0)
			pflag=1;
		if(arr[i]<0 && pflag==1)
			count++;
	}
	if(pflag==0)
		count++;
	cout<<count;
}
