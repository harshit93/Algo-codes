#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

typedef long long int LL;
LL m;
LL fact(LL a)
{
	LL fac=1;
	for(LL i=1;i<=a;i++)
		fac=(i*fac)%((int)pow(10,m));
	LL pro=1;
	for(LL i=1;i<=fac;i++)
		pro=(i*pro)%((int)pow(10,m));
	return pro;
}

main()
{
	LL t;
	cin>>t;
	LL n,ans;
	while(t--)
	{
		cin>>n>>m;
		ans=fact(n);
		//ans=fact(ans);
		cout<<ans<<endl;
	}



}
