#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

typedef unsigned long long int LL;
main()
{
	int t;
	scanf("%d",&t);
	//int arr[10003];
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		//memset(arr, 0, n);
		float avg=0.00;
		LL sum = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum = sum + arr[i];
			//avg += (arr[i] - avg) / (i+1);
			//avg = ((avg * (i)) + arr[i]) / (i+1);
		}
		//cout<<avg<<endl;
		avg = sum / n; 
		int count = 0;
		for(int i=0;i<n;i++)
			if(arr[i]>avg)
				count++;
		cout<<count<<endl;
	}
}