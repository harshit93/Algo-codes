#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int k;
		cin>>k;
		int m=arr[k-1];
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<m)
				count++;
		}
		count++;
		cout<<count;
	}
	return 0;
}
