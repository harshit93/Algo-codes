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
		int arr[n];
		int arrnum[10005];
		for(int i=0;i<10005;i++)
			arrnum[i]=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			arrnum[int(arr[i])]++;
		}int max=0;
		for(int i=0;i<10005;i++)
		{
			if(arrnum[i]>arrnum[max])
				max=i;
		}
		cout<<max<<" "<<arrnum[max]<<endl;
	}
	return 0;
}
