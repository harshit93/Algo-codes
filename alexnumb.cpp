#include<iostream>
using namespace std;
typedef unsigned long long int LL;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LL n;
		cin>>n;
		int a;
		for(int i=1;i<=n;i++)
			cin>>a;
		LL ans=(n*(n-1))/2;
		cout<<ans<<endl;
	}
	return 0;
}
