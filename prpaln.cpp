#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char arr[100007];
		cin>>arr;
		int n = strlen(arr);
		int count=0;
		for(int i = 0; i < strlen(arr); i++)
		{
			if(arr[i] != arr[n-1])
			{
				count++;
				i--;
				if(count==2)
					break;
			}
			n--;
			if(n == strlen(arr)/2)
				break;
		}
		if(count < 2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}