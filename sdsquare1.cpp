#include<iostream>
#include<math.h>
using namespace std;

typedef unsigned long long int LL;

LL n=10000000000;

int check(LL x)
{
	int k,ret=1;
	while(x!=0)
	{
		k=x%10;
		if(k!=0 && k!=1 && k!=4 && k!=9)
		{
			ret=-1;
		}
		x=x/10;
	}
	//cout<<ret;
	return ret;
}

main()
{
	LL arr[100005];
	for(int j=0;j<100005;j++)
		arr[j]=0;
	LL i;
	for(i=1; (i*i)<=n; i++)
	{
		int val=check(i*i);
		if(val==1)
			arr[i]=arr[i-1]+1;
		else if(val=-1)
			arr[i]=arr[i-1];
	}
	int t;
	cin>>t;
	while(t--)
	{
		LL a,b;
		cin>>a>>b;
		LL A,B;
		A=(LL)ceil(sqrt(a));
		B=(LL)floor(sqrt(b));
		int count=arr[B]-arr[A-1];
		//cout<<arr[b]<<" "<<arr[a];
		cout<<(count)<<endl;
	}
	return 0;
}
