#include<iostream>
using namespace std;
typedef unsigned long long LL;

main()
{
	LL a,b,s;
	cin>>a>>b>>s;
	LL count=0,smallest=999999999;
	//smallest++;
	//cout<<smallest<<endl;
	for(LL i=b;i>=a;i--)
	{
		LL c=i,d,sum=0;
		while(c!=0)
		{
			d=c%10;
			sum+=d;
			c=c/10;
		}
		if(sum==s)
		{
			count++;
			smallest=i;
		}
	}
	cout<<count<<endl<<smallest<<endl;
	return 0;
}
