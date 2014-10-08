#include<iostream>
using namespace std;

typedef unsigned long long int LL;
LL n=1000000;
//LL arr1[n];

int isKiss(LL x)
{
	int c=0;
	for(LL i=1;i<=x;i++)
		if(x%i==0)
			c++;
	if()
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL l,r;
		cin>>l>>r;
		LL count=0;
		LL i=l;
		while(i<=r)
		{
			if(isKiss(i)==1)
				count++;
		}
		cout<<count;
	}
}