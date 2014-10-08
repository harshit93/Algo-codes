#include <iostream>
#include <cstdio>
using namespace std;
/*
int count(int x)
{
	int div=5;
	int count=0;
	while(x-div >= 0)
	{
		count=count+x/div;
		div=div*5;
	}
	return count;
}*/

main()
{
	int t;
	int div=5;
	int count=0;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		div=5;
		count=0;
		while(n-div >= 0)
		{
			count=count+n/div;
			div=div*5;
		}
		//int num=count(n);
		printf("%d\n",count);
	}
	return 0;
}