#include <iostream>
using namespace std;

typedef unsigned long long int LL;

main()
{
	LL t;
	LL arr[1000001] = {0};
	scanf("%lld",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		arr[n]++;
	}
	LL i;
	for (i=0; i<1000001; i++)
	{
		while(arr[i]>0)
		{
			printf("%lld\n", i);
			arr[i]--;
		}
	}
}