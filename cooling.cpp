#include<iostream>
#include<algorithm>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int count=n;
		int a;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a<arr[0])
				count--;
			else
			{
				for(int j=n-1;j>=0;j--)
					
			}
		}
		cout<<count<<endl;
	}
}
