#include <iostream>
#include <cstdio>
using namespace std;

typedef long long int LL;
main()
{
	LL t;
	cin>>t;
	while(t--)
	{
		LL x1,y1,x2,y2,x,y;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		LL d1,d2,final;
		d1= x - x1;
		d2 = x2 - x;
		final = d2;
		if(d1<d2)
			final = d1;
		d1 = y - y1;
		d2 = y2 - y;
		if(d1<final)
			final = d1;
		if(d2<final)
			final = d2;
		cout<<final<<endl;
	}
}