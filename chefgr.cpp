#include <iostream>
#include <cstdio>
using namespace std;

main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,max=0;
		scanf("%d %d",&n,&m);
		int arr[n];
		for(int i=0; i < n; i++)
		{
			cin>>arr[i];
			if(max<arr[i])
				max=arr[i];
		}
		int count = 0;
		for(int i=0; i<n; i++)
			count = count + (max-arr[i]);
		if(m == count)
			cout<<"Yes"<<endl;
		else if((m-count) % n == 0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}