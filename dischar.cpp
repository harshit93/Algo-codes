#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char arr[100007];
		cin>>arr;
		int count = strlen(arr);
		int hash[26] = {0};
		for(int i=0;i<strlen(arr); i++)
		{
			if(hash[int(arr[i]-97)] > 0)
				count--;
			else
				hash[int(arr[i]-97)]++;
		}
		cout<<count<<endl;
	}
}